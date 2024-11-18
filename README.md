# Spot-DL

A simple downloader for downloading spotify songs/products with metadata.

Credits:

- [DevLARLEY/spotify-oggmp4-dl](https://github.com/DevLARLEY/spotify-oggmp4-dl)
- [uhwot/unplayplay](https://git.gay/uhwot/unplayplay)

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
  -help
        Show this help message.
  -id string
        Spotify URL/URI/ID (required). Example usage: -id https://open.spotify.com/track/4jTrKMoc44RYZsoFsIlQev
  -quality string
        Quality level. Options: MP4_128, MP4_128_DUAL, MP4_256, MP4_256_DUAL, OGG_VORBIS_320, OGG_VORBIS_160, OGG_VORBIS_96 (default "MP4_128_DUAL")
  -output string
        Output path. (default "./output")
  -c string
        Path to config file (default "config.json")
  -debug
        Print debug information. Use this to enable more detailed logging for troubleshooting.
  -mp3
        Convert downloaded music to mp3 format
  -no-metadata
        Skip adding metadata to downloaded files.
```

# Notice

- A `.vwd` file is required in the `./cdm` directory for mp4 decryption. Detailed instructions can be found in: https://github.com/hyugogirubato/KeyDive.

- Get the `sp_dc` cookie value from your browser and enter to the cli at first run.

- OGG decryption may not work because the [playplay](https://git.gay/uhwot/unplayplay.git) key is always in update.