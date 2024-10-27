# SpoDL-Go

A simple downloader for downloading spotify songs/products written by Golang.

Credits: [DevLARLEY/spotify-oggmp4-dl](https://github.com/DevLARLEY/spotify-oggmp4-dl)

# Usage

```shell
Usage of sp-dl-go:
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

- You need to put a [CDM](https://forum.videohelp.com/threads/408031-Dumping-Your-own-L3-CDM-with-Android-Studio) in the `./cdm` directory for mp4 decryption.

- Get your `sp_dc` cookie value from somewhere and enter it to the terminal at your first run.

- OGG decryption may not always work because the platform occasionally updates the decryption token or something, which is not easy to obtain.