cmd_drivers/staging/media/imx/imx7-media-csi.mod := printf '%s\n'   imx7-media-csi.o | awk '!x[$$0]++ { print("drivers/staging/media/imx/"$$0) }' > drivers/staging/media/imx/imx7-media-csi.mod
