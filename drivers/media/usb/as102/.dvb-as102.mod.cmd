cmd_drivers/media/usb/as102/dvb-as102.mod := printf '%s\n'   as102_drv.o as102_fw.o as10x_cmd.o as10x_cmd_stream.o as102_usb_drv.o as10x_cmd_cfg.o | awk '!x[$$0]++ { print("drivers/media/usb/as102/"$$0) }' > drivers/media/usb/as102/dvb-as102.mod