cmd_sound/soc/codecs/snd-soc-lpass-rx-macro.mod := printf '%s\n'   lpass-rx-macro.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-lpass-rx-macro.mod
