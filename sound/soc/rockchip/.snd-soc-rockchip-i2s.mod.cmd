cmd_sound/soc/rockchip/snd-soc-rockchip-i2s.mod := printf '%s\n'   rockchip_i2s.o | awk '!x[$$0]++ { print("sound/soc/rockchip/"$$0) }' > sound/soc/rockchip/snd-soc-rockchip-i2s.mod
