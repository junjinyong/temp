cmd_drivers/firmware/modules.order := {   cat drivers/firmware/arm_ffa/modules.order;   cat drivers/firmware/arm_scmi/modules.order;   cat drivers/firmware/broadcom/modules.order;   cat drivers/firmware/cirrus/modules.order;   cat drivers/firmware/meson/modules.order;   cat drivers/firmware/efi/modules.order;   cat drivers/firmware/imx/modules.order;   cat drivers/firmware/psci/modules.order;   cat drivers/firmware/smccc/modules.order;   cat drivers/firmware/tegra/modules.order;   cat drivers/firmware/xilinx/modules.order; :; } > drivers/firmware/modules.order