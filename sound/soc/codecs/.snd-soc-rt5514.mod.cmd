cmd_sound/soc/codecs/snd-soc-rt5514.mod := printf '%s\n'   rt5514.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-rt5514.mod
