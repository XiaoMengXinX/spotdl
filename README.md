# Spot-DL

A simple downloader for downloading spotify songs/products with metadata.

Credits:

- [DevLARLEY/spotify-oggmp4-dl](https://github.com/DevLARLEY/spotify-oggmp4-dl)

# Installation

```shell
go install github.com/XiaoMengXinX/spotdl/cmd/spotdl@latest
```

For macOS, you may need to codesign the binary file:

```shell
sudo codesign --force --deep --sign - ~/go/bin/spotdl
```

# Usage

```shell
Usage of spotdl:
  -c, --config string     Path to configuration file (default "config.json")
  -d, --debug             Debug mode
  -h, --help              Show this help message
  -i, --id string         ID/URL/URI of a spotify track/playlist/album/podcast to download (Required)
                          Example: -i https://open.spotify.com/track/4jTrKMoc44RYZsoFsIlQev
      --mp3               Convert downloaded files to mp3 format
      --no-metadata       Skip adding metadata to downloaded files
  -o, --output string     Output directory for downloaded files (default "./output")
  -q, --quality string    Audio quality level. (default "MP4_128")
                          Options:	MP4_128, MP4_128_DUAL, MP4_256, MP4_256_DUAL
```

# Notice

- A `.vwd` file is required in the `./cdm` directory for mp4 decryption. Detailed instructions can be found
  in: https://github.com/hyugogirubato/KeyDive.

- Get the `sp_dc` cookie value from your browser and enter to the cli at first run.