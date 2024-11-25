package main

import (
	"fmt"
	"os"

	log "github.com/XiaoMengXinX/spotdl/logger"
	"github.com/XiaoMengXinX/spotdl/playplay"
	"github.com/XiaoMengXinX/spotdl/spotify"
	"github.com/spf13/pflag"
)

func main() {
	// Set up flag definitions using pflag
	var (
		showHelp           = pflag.BoolP("help", "h", false, "Show this help message")
		id                 = pflag.StringP("id", "i", "", "ID/URL/URI of a spotify track/playlist/album/podcast to download (Required)\nExample: -i https://open.spotify.com/track/4jTrKMoc44RYZsoFsIlQev")
		quality            = pflag.StringP("quality", "q", "", "Audio quality level. (default \"MP4_128_DUAL\")\nOptions:\tMP4_128, MP4_128_DUAL, MP4_256, MP4_256_DUAL,\n\t\tOGG_VORBIS_320, OGG_VORBIS_160, OGG_VORBIS_96\n\t\t")
		output             = pflag.StringP("output", "o", "./output", "Output directory for downloaded files")
		config             = pflag.StringP("config", "c", "config.json", "Path to configuration file")
		debug              = pflag.BoolP("debug", "d", false, "Debug mode")
		convertToMP3       = pflag.BoolP("mp3", "", false, "Convert downloaded files to mp3 format")
		skipAddingMetadata = pflag.BoolP("no-metadata", "", false, "Skip adding metadata to downloaded files")
		pathToReUnplayplay = pflag.StringP("playplay", "", "", "Path to your re-unplayplay binary (only needed for OGG decryption)")
	)

	pflag.Parse()

	if *showHelp {
		pflag.Usage()
		os.Exit(0)
	}
	if *id == "" {
		fmt.Println("Error: -id is required")
		pflag.Usage()
		os.Exit(1)
	}
	if *debug {
		log.SetLevel(log.LevelDebug)
	}
	playplay.PathToReUnplayplayBinary = *pathToReUnplayplay

	sp := spotify.NewDownloader()

	sp.TokenManager.ConfigManager.SetConfigPath(*config)
	log.Infof("Set Config Path: %s", *config)

	sp.SetOutputPath(*output)
	log.Infof("Set Output path: %s", *output)

	if *quality == "" {
		*quality = spotify.Quality128MP4Dual
	}
	if err := sp.SetQuality(*quality); err != nil {
		log.Fatalf("Error setting quality level: %v", err)
	}
	log.Infof("Set quality level: %s", *quality)

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

	err := sp.Download(*id)
	if err != nil {
		log.Fatalln(err)
	}
}
