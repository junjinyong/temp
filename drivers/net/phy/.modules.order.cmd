cmd_drivers/net/phy/modules.order := {   cat drivers/net/phy/mscc/modules.order;   echo drivers/net/phy/ax88796b.ko;   echo drivers/net/phy/bcm54140.ko;   echo drivers/net/phy/bcm7xxx.ko;   echo drivers/net/phy/bcm-phy-lib.ko;   echo drivers/net/phy/broadcom.ko;   echo drivers/net/phy/marvell10g.ko;   echo drivers/net/phy/marvell.ko;   echo drivers/net/phy/meson-gxl.ko;   echo drivers/net/phy/microchip.ko;   echo drivers/net/phy/smsc.ko; :; } > drivers/net/phy/modules.order