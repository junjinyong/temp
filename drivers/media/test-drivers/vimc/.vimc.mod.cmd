cmd_drivers/media/test-drivers/vimc/vimc.mod := printf '%s\n'   vimc-core.o vimc-common.o vimc-streamer.o vimc-capture.o vimc-debayer.o vimc-scaler.o vimc-sensor.o vimc-lens.o | awk '!x[$$0]++ { print("drivers/media/test-drivers/vimc/"$$0) }' > drivers/media/test-drivers/vimc/vimc.mod