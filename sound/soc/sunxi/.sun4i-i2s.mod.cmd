cmd_sound/soc/sunxi/sun4i-i2s.mod := printf '%s\n'   sun4i-i2s.o | awk '!x[$$0]++ { print("sound/soc/sunxi/"$$0) }' > sound/soc/sunxi/sun4i-i2s.mod
