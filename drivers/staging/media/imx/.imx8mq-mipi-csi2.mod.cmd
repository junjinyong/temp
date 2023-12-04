cmd_drivers/staging/media/imx/imx8mq-mipi-csi2.mod := printf '%s\n'   imx8mq-mipi-csi2.o | awk '!x[$$0]++ { print("drivers/staging/media/imx/"$$0) }' > drivers/staging/media/imx/imx8mq-mipi-csi2.mod
