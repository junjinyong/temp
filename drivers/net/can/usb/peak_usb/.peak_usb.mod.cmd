cmd_drivers/net/can/usb/peak_usb/peak_usb.mod := printf '%s\n'   pcan_usb_core.o pcan_usb.o pcan_usb_pro.o pcan_usb_fd.o | awk '!x[$$0]++ { print("drivers/net/can/usb/peak_usb/"$$0) }' > drivers/net/can/usb/peak_usb/peak_usb.mod