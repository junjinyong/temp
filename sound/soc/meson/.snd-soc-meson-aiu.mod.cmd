cmd_sound/soc/meson/snd-soc-meson-aiu.mod := printf '%s\n'   aiu.o aiu-acodec-ctrl.o aiu-codec-ctrl.o aiu-encoder-i2s.o aiu-encoder-spdif.o aiu-fifo.o aiu-fifo-i2s.o aiu-fifo-spdif.o | awk '!x[$$0]++ { print("sound/soc/meson/"$$0) }' > sound/soc/meson/snd-soc-meson-aiu.mod