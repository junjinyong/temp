cmd_drivers/usb/gadget/modules.order := {   cat drivers/usb/gadget/udc/modules.order;   cat drivers/usb/gadget/function/modules.order;   cat drivers/usb/gadget/legacy/modules.order;   echo drivers/usb/gadget/libcomposite.ko; :; } > drivers/usb/gadget/modules.order