cmd_drivers/usb/mtu3/built-in.a := rm -f drivers/usb/mtu3/built-in.a;  printf "drivers/usb/mtu3/%s " mtu3_plat.o mtu3_host.o mtu3_core.o mtu3_gadget_ep0.o mtu3_gadget.o mtu3_qmu.o mtu3_dr.o mtu3_debugfs.o | xargs aarch64-linux-gnu-ar cDPrST drivers/usb/mtu3/built-in.a