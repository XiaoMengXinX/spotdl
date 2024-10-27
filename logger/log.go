package logger

import (
	"context"
	"fmt"
	"log/slog"
	"os"
	"path/filepath"
	"runtime"
	"time"
)

func init() {
	currentLevel = LevelInfo
	handler = NewTextHandler(slog.Level(currentLevel))
	logger = slog.New(handler)
}

var handler *TextHandler
var logger *slog.Logger
var currentLevel Level

type Level slog.Level

type TextHandler struct {
	level slog.Level
}

const (
	Reset   = "\033[0m"
	Red     = "\033[31m"
	Yellow  = "\033[33m"
	Blue    = "\033[34m"
	Green   = "\033[32m"
	Magenta = "\033[35m"
)

const (
	LevelDebug  Level = -4
	LevelInfo   Level = 0
	LevelWarn   Level = 4
	LevelError  Level = 8
	LevelSilent Level = 16
)

func levelColor(level slog.Level) string {
	switch level {
	case slog.LevelDebug:
		return Blue
	case slog.LevelInfo:
		return Green
	case slog.LevelWarn:
		return Yellow
	case slog.LevelError:
		return Red
	default:
		return Reset
	}
}

func NewTextHandler(level slog.Level) *TextHandler {
	return &TextHandler{level: level}
}

func (h *TextHandler) Handle(_ context.Context, r slog.Record) error {
	_, file, line, ok := runtime.Caller(4)
	if ok {
		file = filepath.Base(file)
	} else {
		file = "unknown"
		line = 0
	}

	timestamp := time.Now().Format("2006/01/02 15:04:05")

	color := levelColor(r.Level)
	logLine := fmt.Sprintf("%s%s [%s] %s (%s:%d)%s\n",
		color, timestamp, r.Level.String(), r.Message, file, line, Reset)

	fmt.Print(logLine)
	return nil
}

func (h *TextHandler) Enabled(_ context.Context, level slog.Level) bool {
	return level >= h.level
}

func (h *TextHandler) WithAttrs(attrs []slog.Attr) slog.Handler {
	return &TextHandler{level: h.level}
}

func (h *TextHandler) WithGroup(name string) slog.Handler {
	return h
}

func SetLevel(level Level) {
	currentLevel = level
	handler.level = slog.Level(currentLevel)
}

func GetLevel() Level {
	return currentLevel
}

func Info(msg string) {
	logger.Info(msg)
}

func Infoln(args ...any) {
	logger.Info(fmt.Sprint(args...))
}

func Infof(format string, args ...any) {
	logger.Info(fmt.Sprintf(format, args...))
}

func Debug(msg string) {
	logger.Debug(msg)
}

func Debugln(args ...any) {
	logger.Debug(fmt.Sprint(args...))
}

func Debugf(format string, args ...any) {
	logger.Debug(fmt.Sprintf(format, args...))
}

func Warn(msg string) {
	logger.Warn(msg)
}

func Warnln(args ...any) {
	logger.Warn(fmt.Sprint(args...))
}

func Warnf(format string, args ...any) {
	logger.Warn(fmt.Sprintf(format, args...))
}

func Error(msg string) {
	logger.Error(msg)
}

func Errorln(args ...any) {
	logger.Error(fmt.Sprint(args...))
}

func Errorf(format string, args ...any) {
	logger.Error(fmt.Sprintf(format, args...))
}

func Fatal(msg string) {
	logger.Error(msg)
	os.Exit(1)
}

func Fatalln(args ...any) {
	logger.Error(fmt.Sprint(args...))
	os.Exit(1)
}

func Fatalf(format string, args ...any) {
	logger.Error(fmt.Sprintf(format, args...))
	os.Exit(1)
}
