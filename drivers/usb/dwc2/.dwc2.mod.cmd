cmd_drivers/usb/dwc2/dwc2.mod := printf '%s\n'   core.o core_intr.o platform.o drd.o params.o hcd.o hcd_intr.o hcd_queue.o hcd_ddma.o gadget.o debugfs.o | awk '!x[$$0]++ { print("drivers/usb/dwc2/"$$0) }' > drivers/usb/dwc2/dwc2.mod