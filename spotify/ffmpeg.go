package spotify

import (
	"fmt"
	"github.com/Sorrow446/go-mp4tag"
	log "github.com/XiaoMengXinX/spotdl/logger"
	ffmpeg "github.com/u2takey/ffmpeg-go"
	"os"
	"os/exec"
	"path/filepath"
	"strconv"
)

var hasFFmpeg bool

func init() {
	_, err := exec.LookPath("ffmpeg")
	if err == nil {
		hasFFmpeg = true
	}
}

func encodeMetadata(inputFile, coverFilePath string, metadata map[string]string) error {
	tempFile := inputFile + ".tmp" + filepath.Ext(inputFile)

	var mdArg []string
	for key, value := range metadata {
		if value != "" {
			mdArg = append(mdArg, fmt.Sprintf("%s=%s", key, value))
		}
	}

	input := []*ffmpeg.Stream{ffmpeg.Input(inputFile)}
	args := ffmpeg.KwArgs{
		"c":        "copy",
		"metadata": mdArg,
	}

	if coverFilePath != "" {
		if _, err := os.Stat(coverFilePath); !os.IsNotExist(err) {
			input = append(input, []*ffmpeg.Stream{ffmpeg.Input(coverFilePath)}...)
			args["disposition:v:0"] = "attached_pic"
		}
	}

	ff := ffmpeg.Output(input, tempFile, args).
		OverWriteOutput().Silent(true)

	if log.GetLevel() == log.LevelDebug {
		ff.Silent(false).WithErrorOutput(os.Stderr)
	}

	err := ff.Run()
	if err != nil {
		return fmt.Errorf("failed to encode metadata: %v", err)
	}

	if err := os.Remove(inputFile); err != nil {
		return fmt.Errorf("failed to remove temp file: %v", err)
	}

	if err := os.Rename(tempFile, inputFile); err != nil {
		return fmt.Errorf("fail to rename temp file: %v", err)
	}

	mp4, err := mp4tag.Open(inputFile)
	if err != nil {
		return fmt.Errorf("fail to open mp4 file: %v", err)
	}
	defer mp4.Close()

	var year int
	if len(metadata["date"]) >= 4 {
		year, _ = strconv.Atoi(metadata["date"][:4])
	}
	tags := mp4tag.MP4Tags{
		Custom: map[string]string{
			"label": metadata["label"],
			"ISRC":  metadata["ISRC"],
			"UPC":   metadata["UPC"],
			"EAN":   metadata["EAN"],
		},
		CustomGenre: metadata["genre"],
		Year:        int32(year),
	}

	err = mp4.Write(&tags, []string{})
	if err != nil {
		return fmt.Errorf("fail to write extra tags: %v", err)
	}
	return nil
}

func (d *Downloader) convertMp3(inputFile string, outputFile string) (err error) {
	if _, err := os.Stat(inputFile); os.IsNotExist(err) {
		return fmt.Errorf(`input file [%s] not exists`, inputFile)
	}

	_, err = exec.LookPath("ffmpeg")
	if err != nil {
		log.Warnln("ffmpeg not found, skip converting format")
		return
	}

	log.Debugf("Converting [%s] to [%s]", inputFile, outputFile)

	bitrate := ""
	switch d.quality {
	case Quality96Vorbis:
		bitrate = "96"
	case Quality128MP4:
		bitrate = "128"
	case Quality160Vorbis:
		bitrate = "160"
	case Quality256MP4:
		bitrate = "256"
	case Quality320Vorbis:
		bitrate = "320"
	}
	log.Debugf("Set convertor bitrate: %sk", bitrate)

	ff := ffmpeg.Input(inputFile).
		Output(outputFile, ffmpeg.KwArgs{
			"format":        "mp3",
			"audio_bitrate": bitrate + "k",
			// "acodec": 	"libmp3lame",
		}).
		OverWriteOutput().Silent(true)

	if log.GetLevel() == log.LevelDebug {
		ff.Silent(false).WithErrorOutput(os.Stderr)
	}

	err = ff.Run()
	if err != nil {
		return fmt.Errorf("error while converting to mp3: %v", err)
	}
	log.Debugln("Convert successfully")

	return
}
