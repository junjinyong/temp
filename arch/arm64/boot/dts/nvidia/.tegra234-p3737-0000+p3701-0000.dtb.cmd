cmd_arch/arm64/boot/dts/nvidia/tegra234-p3737-0000+p3701-0000.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/nvidia/.tegra234-p3737-0000+p3701-0000.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/nvidia/.tegra234-p3737-0000+p3701-0000.dtb.dts.tmp arch/arm64/boot/dts/nvidia/tegra234-p3737-0000+p3701-0000.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/nvidia/tegra234-p3737-0000+p3701-0000.dtb -b 0 -iarch/arm64/boot/dts/nvidia/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address -@  -d arch/arm64/boot/dts/nvidia/.tegra234-p3737-0000+p3701-0000.dtb.d.dtc.tmp arch/arm64/boot/dts/nvidia/.tegra234-p3737-0000+p3701-0000.dtb.dts.tmp ; cat arch/arm64/boot/dts/nvidia/.tegra234-p3737-0000+p3701-0000.dtb.d.pre.tmp arch/arm64/boot/dts/nvidia/.tegra234-p3737-0000+p3701-0000.dtb.d.dtc.tmp > arch/arm64/boot/dts/nvidia/.tegra234-p3737-0000+p3701-0000.dtb.d

source_arch/arm64/boot/dts/nvidia/tegra234-p3737-0000+p3701-0000.dtb := arch/arm64/boot/dts/nvidia/tegra234-p3737-0000+p3701-0000.dts

deps_arch/arm64/boot/dts/nvidia/tegra234-p3737-0000+p3701-0000.dtb := \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/input/gpio-keys.h \
  arch/arm64/boot/dts/nvidia/tegra234-p3701-0000.dtsi \
  arch/arm64/boot/dts/nvidia/tegra234.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/tegra234-clock.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/tegra234-gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/mailbox/tegra186-hsp.h \
  scripts/dtc/include-prefixes/dt-bindings/memory/tegra234-mc.h \
  scripts/dtc/include-prefixes/dt-bindings/power/tegra234-powergate.h \
  scripts/dtc/include-prefixes/dt-bindings/reset/tegra234-reset.h \
  arch/arm64/boot/dts/nvidia/tegra234-p3737-0000.dtsi \

arch/arm64/boot/dts/nvidia/tegra234-p3737-0000+p3701-0000.dtb: $(deps_arch/arm64/boot/dts/nvidia/tegra234-p3737-0000+p3701-0000.dtb)

$(deps_arch/arm64/boot/dts/nvidia/tegra234-p3737-0000+p3701-0000.dtb):
