cmd_drivers/crypto/modules.order := {   cat drivers/crypto/allwinner/modules.order;   cat drivers/crypto/xilinx/modules.order;   cat drivers/crypto/hisilicon/modules.order;   cat drivers/crypto/keembay/modules.order;   cat drivers/crypto/ccree/modules.order;   cat drivers/crypto/caam/modules.order;   echo drivers/crypto/qcom-rng.ko;   cat drivers/crypto/bcm/modules.order;   cat drivers/crypto/amlogic/modules.order; :; } > drivers/crypto/modules.order