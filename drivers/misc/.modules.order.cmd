cmd_drivers/misc/modules.order := {   cat drivers/misc/eeprom/modules.order;   cat drivers/misc/cb710/modules.order;   cat drivers/misc/ti-st/modules.order;   cat drivers/misc/lis3lv02d/modules.order;   cat drivers/misc/cardreader/modules.order;   echo drivers/misc/bcm2835_smi.ko;   echo drivers/misc/qcom-coincell.ko;   echo drivers/misc/fastrpc.ko;   echo drivers/misc/pci_endpoint_test.ko;   cat drivers/misc/uacce/modules.order; :; } > drivers/misc/modules.order