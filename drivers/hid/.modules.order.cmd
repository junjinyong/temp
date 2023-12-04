cmd_drivers/hid/modules.order := {   cat drivers/hid/usbhid/modules.order;   echo drivers/hid/hid-multitouch.ko;   cat drivers/hid/i2c-hid/modules.order; :; } > drivers/hid/modules.order
