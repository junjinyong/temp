cmd_sound/soc/meson/snd-soc-meson-axg-tdm-interface.mod := printf '%s\n'   axg-tdm-interface.o | awk '!x[$$0]++ { print("sound/soc/meson/"$$0) }' > sound/soc/meson/snd-soc-meson-axg-tdm-interface.mod
