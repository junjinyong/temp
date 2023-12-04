cmd_drivers/interconnect/imx/imx-interconnect.mod := printf '%s\n'   imx.o | awk '!x[$$0]++ { print("drivers/interconnect/imx/"$$0) }' > drivers/interconnect/imx/imx-interconnect.mod
