cmd_drivers/devfreq/imx-bus.mod := printf '%s\n'   imx-bus.o | awk '!x[$$0]++ { print("drivers/devfreq/"$$0) }' > drivers/devfreq/imx-bus.mod
