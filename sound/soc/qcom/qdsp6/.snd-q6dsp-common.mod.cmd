cmd_sound/soc/qcom/qdsp6/snd-q6dsp-common.mod := printf '%s\n'   q6dsp-common.o q6dsp-lpass-ports.o q6dsp-lpass-clocks.o | awk '!x[$$0]++ { print("sound/soc/qcom/qdsp6/"$$0) }' > sound/soc/qcom/qdsp6/snd-q6dsp-common.mod