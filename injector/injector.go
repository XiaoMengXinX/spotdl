package injector

import (
	"context"
	"encoding/base32"
	"fmt"
	"time"

	"github.com/chromedp/cdproto/page"
	"github.com/chromedp/cdproto/runtime"
	"github.com/chromedp/chromedp"
)

const endpoint = "https://open.spotify.com/"

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
		Timeout:      20 * time.Second,
		PollInterval: 500 * time.Millisecond,
		EncodeBase32: true,
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
	err := chromedp.Run(ctx,
		runtime.Enable(),
		page.Enable(),
		chromedp.ActionFunc(func(ctx context.Context) error {
			_, err := page.AddScriptToEvaluateOnNewDocument(interceptScript).Do(ctx)
			return err
		}),
		chromedp.Navigate(targetURL),
	)

	if err != nil {
		return nil, fmt.Errorf("初始化失败: %w", err)
	}

	// 轮询检查拦截状态
	ticker := time.NewTicker(i.opts.PollInterval)
	defer ticker.Stop()

	timeout := time.After(i.opts.Timeout)

	for {
		select {
		case <-timeout:
			return nil, fmt.Errorf("拦截超时")

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
