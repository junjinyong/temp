cmd_drivers/bus/modules.order := {   cat drivers/bus/fsl-mc/modules.order;   cat drivers/bus/mhi/modules.order;   echo drivers/bus/tegra-aconnect.ko; :; } > drivers/bus/modules.order
