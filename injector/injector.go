package injector

import (
	"context"
	"encoding/base32"
	"fmt"
	"regexp"
	"time"

	"github.com/chromedp/cdproto/fetch"
	"github.com/chromedp/cdproto/network"
	"github.com/chromedp/cdproto/page"
	"github.com/chromedp/cdproto/runtime"
	"github.com/chromedp/chromedp"
)

const endpoint = "https://open.spotify.com/"

var allowedJS = regexp.MustCompile(`(?:vendor~web-player|encore~web-player|web-player)\.[0-9a-f]{4,}\.(?:js|mjs)`)

type Secret struct {
	Secret  string `json:"secret"`
	Version int    `json:"version"`
}

type Interceptor struct {
	opts *InterceptOptions
}

type InterceptOptions struct {
	Headless     bool
	Timeout      time.Duration
	PollInterval time.Duration
	EncodeBase32 bool
	FilterJS     bool
}

type interceptStatus struct {
	Ready     bool     `json:"ready"`
	Success   bool     `json:"success"`
	Data      []Secret `json:"data"`
	Message   string   `json:"message"`
	CallCount int      `json:"callCount"`
}

func DefaultOptions() *InterceptOptions {
	return &InterceptOptions{
		Headless:     true,
		Timeout:      120 * time.Second,
		PollInterval: 500 * time.Millisecond,
		EncodeBase32: true,
		FilterJS:     true,
	}
}

func QuickIntercept() ([]Secret, error) {
	interceptor := NewInterceptor(nil)
	return interceptor.Intercept(context.Background(), endpoint)
}

func NewInterceptor(opts *InterceptOptions) *Interceptor {
	if opts == nil {
		opts = DefaultOptions()
	}
	return &Interceptor{opts: opts}
}

func (i *Interceptor) Intercept(ctx context.Context, targetURL string) ([]Secret, error) {
	chromeOpts := append(chromedp.DefaultExecAllocatorOptions[:],
		chromedp.Flag("headless", i.opts.Headless),
		chromedp.Flag("disable-gpu", true),
		chromedp.Flag("disable-web-security", true),
		chromedp.Flag("enable-low-end-device-mode", true),
		chromedp.Flag("no-sandbox", true),
		chromedp.Flag("disable-setuid-sandbox", true),
		chromedp.Flag("blink-settings=imagesEnabled", "false"),
	)

	allocCtx, cancel := chromedp.NewExecAllocator(ctx, chromeOpts...)
	defer cancel()
	chromeCtx, cancel := chromedp.NewContext(allocCtx)
	defer cancel()
	chromeCtx, cancel = context.WithTimeout(chromeCtx, i.opts.Timeout)
	defer cancel()

	secrets, err := i.interceptWithPolling(chromeCtx, targetURL)
	if err != nil {
		return nil, err
	}
	if i.opts.EncodeBase32 && len(secrets) > 0 {
		encoder := base32.StdEncoding.WithPadding(base32.NoPadding)
		for idx := range secrets {
			secrets[idx].Secret = encoder.EncodeToString([]byte(secrets[idx].Secret))
		}
	}
	return secrets, nil
}

func (i *Interceptor) interceptWithPolling(ctx context.Context, targetURL string) ([]Secret, error) {
	var tasks []chromedp.Action
	tasks = append(tasks,
		runtime.Enable(),
		page.Enable(),
	)

	if i.opts.FilterJS {
		tasks = append(tasks,
			network.Enable(),
			fetch.Enable(),
			chromedp.ActionFunc(func(ctx context.Context) error {
				return i.setupNetworkInterception(ctx)
			}),
		)
	}

	tasks = append(tasks,
		chromedp.ActionFunc(func(ctx context.Context) error {
			_, err := page.AddScriptToEvaluateOnNewDocument(interceptScript).Do(ctx)
			return err
		}),
		chromedp.Navigate(targetURL),
	)

	err := chromedp.Run(ctx, tasks...)
	if err != nil {
		return nil, fmt.Errorf("failed to initialize: %w", err)
	}

	ticker := time.NewTicker(i.opts.PollInterval)
	defer ticker.Stop()
	timeout := time.After(i.opts.Timeout)

	for {
		select {
		case <-timeout:
			return nil, fmt.Errorf("inject timeout")
		case <-ctx.Done():
			return nil, ctx.Err()
		case <-ticker.C:
			var status interceptStatus
			err := chromedp.Run(ctx,
				chromedp.Evaluate(`window.interceptStatus || {}`, &status),
			)

			if err != nil {
				continue
			}
			if !status.Ready {
				continue
			}
			if status.Success {
				return status.Data, nil
			}
		}
	}
}

func (i *Interceptor) setupNetworkInterception(ctx context.Context) error {
	err := fetch.Enable().Do(ctx)
	if err != nil {
		return err
	}
	chromedp.ListenTarget(ctx, func(ev interface{}) {
		switch ev := ev.(type) {
		case *fetch.EventRequestPaused:
			go i.handleRequest(ctx, ev)
		}
	})
	return nil
}

func (i *Interceptor) handleRequest(ctx context.Context, ev *fetch.EventRequestPaused) {
	url := ev.Request.URL
	if i.isJavaScriptRequest(url) {
		if !allowedJS.MatchString(url) {
			fetch.FailRequest(ev.RequestID, network.ErrorReasonBlockedByClient).Do(ctx)
			return
		}
	}
	fetch.ContinueRequest(ev.RequestID).Do(ctx)
}

func (i *Interceptor) isJavaScriptRequest(url string) bool {
	return regexp.MustCompile(`\.m?js(\?.*)?$`).MatchString(url)
}
