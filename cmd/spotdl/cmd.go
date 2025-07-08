package main

import (
	"fmt"
	log "github.com/XiaoMengXinX/spotdl/logger"
	"github.com/XiaoMengXinX/spotdl/spotify"
	"github.com/spf13/pflag"
	"os"
	"path/filepath"
)

func main() {
	var (
		showHelp           = pflag.BoolP("help", "h", false, "Show this help message")
		id                 = pflag.StringP("id", "i", "", "ID/URL/URI of a spotify track/playlist/album/podcast to download (Required)\nExample: -i https://open.spotify.com/track/4jTrKMoc44RYZsoFsIlQev")
		quality            = pflag.StringP("quality", "q", "", "Audio quality level (default \"MP4_128_DUAL\")\nOptions: MP4_128, MP4_128_DUAL, MP4_256, MP4_256_DUAL")
		output             = pflag.StringP("output", "o", "./", "Output directory for downloaded files")
		config             = pflag.StringP("config", "c", "", "Path to configuration file")
		debug              = pflag.BoolP("debug", "d", false, "Debug mode")
		convertToMP3       = pflag.BoolP("mp3", "", false, "Convert downloaded files to mp3 format")
		skipAddingMetadata = pflag.BoolP("no-metadata", "", false, "Skip adding metadata to downloaded files")
	)

	pflag.Parse()

	if *showHelp {
		pflag.Usage()
		os.Exit(0)
	}
	if *id == "" {
		fmt.Printf("Usage: %s -i <spotify_id_or_url> [options]\n", os.Args[0])
		fmt.Println("Use -h or --help for more information")
		os.Exit(1)
	}
	if *debug {
		log.SetLevel(log.LevelDebug)
	}

	if *config == "" {
		homeDir, err := os.UserHomeDir()
		if err != nil {
			*config = "config.json"
		} else {
			configDir := filepath.Join(homeDir, ".config", "spotdl")
			if err := os.MkdirAll(configDir, 0755); err != nil {
				log.Errorf("Failed to create config directory: %v", err)
				*config = "config.json"
			} else {
				*config = filepath.Join(configDir, "config.json")
			}
		}
	}

	sp := spotify.NewDownloader()

	sp.TokenManager.ConfigManager.SetConfigPath(*config)
	log.Infof("Set config path: %s", *config)

	sp.SetOutputPath(*output)
	log.Infof("Set output path: %s", *output)

	if *quality != "" {
		if err := sp.SetQuality(*quality); err != nil {
			log.Fatalf("Failed to set quality level: %v", err)
		}
		log.Infof("Set quality level: %s", *quality)
	}

	if *convertToMP3 {
		sp.ConvertToMP3(*convertToMP3)
		log.Infoln("Downloaded music will be converted to mp3")
	}

	if *skipAddingMetadata {
		sp.SkipAddingMetadata(*skipAddingMetadata)
		log.Infoln("Skip adding metadata to downloaded files")
	}

	log.Infof("Initializing Downloader")
	sp.Initialize()

	if *quality == "" {
		log.Infof("Using quality level: %s", sp.TokenManager.ConfigManager.Get().DefaultQuality)
	}

	err := sp.Download(*id)
	if err != nil {
		log.Fatalf("Download failed: %v", err)
	}
}
