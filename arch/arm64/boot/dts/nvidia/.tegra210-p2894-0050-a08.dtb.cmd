cmd_arch/arm64/boot/dts/nvidia/tegra210-p2894-0050-a08.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/nvidia/.tegra210-p2894-0050-a08.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/nvidia/.tegra210-p2894-0050-a08.dtb.dts.tmp arch/arm64/boot/dts/nvidia/tegra210-p2894-0050-a08.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/nvidia/tegra210-p2894-0050-a08.dtb -b 0 -iarch/arm64/boot/dts/nvidia/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/nvidia/.tegra210-p2894-0050-a08.dtb.d.dtc.tmp arch/arm64/boot/dts/nvidia/.tegra210-p2894-0050-a08.dtb.dts.tmp ; cat arch/arm64/boot/dts/nvidia/.tegra210-p2894-0050-a08.dtb.d.pre.tmp arch/arm64/boot/dts/nvidia/.tegra210-p2894-0050-a08.dtb.d.dtc.tmp > arch/arm64/boot/dts/nvidia/.tegra210-p2894-0050-a08.dtb.d

source_arch/arm64/boot/dts/nvidia/tegra210-p2894-0050-a08.dtb := arch/arm64/boot/dts/nvidia/tegra210-p2894-0050-a08.dts

deps_arch/arm64/boot/dts/nvidia/tegra210-p2894-0050-a08.dtb := \
  arch/arm64/boot/dts/nvidia/tegra210-p2894.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/input/gpio-keys.h \
  scripts/dtc/include-prefixes/dt-bindings/mfd/max77620.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/pinctrl-tegra.h \
  arch/arm64/boot/dts/nvidia/tegra210.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/tegra210-car.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/tegra-gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/memory/tegra210-mc.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/pinctrl-tegra-io-pad.h \
  scripts/dtc/include-prefixes/dt-bindings/reset/tegra210-car.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/tegra124-soctherm.h \
  scripts/dtc/include-prefixes/dt-bindings/soc/tegra-pmc.h \

arch/arm64/boot/dts/nvidia/tegra210-p2894-0050-a08.dtb: $(deps_arch/arm64/boot/dts/nvidia/tegra210-p2894-0050-a08.dtb)

$(deps_arch/arm64/boot/dts/nvidia/tegra210-p2894-0050-a08.dtb):
