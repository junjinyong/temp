cmd_sound/soc/meson/snd-soc-meson-axg-tdm-formatter.mod := printf '%s\n'   axg-tdm-formatter.o | awk '!x[$$0]++ { print("sound/soc/meson/"$$0) }' > sound/soc/meson/snd-soc-meson-axg-tdm-formatter.mod
