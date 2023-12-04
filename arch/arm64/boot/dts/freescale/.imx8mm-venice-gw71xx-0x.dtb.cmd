cmd_arch/arm64/boot/dts/freescale/imx8mm-venice-gw71xx-0x.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/freescale/.imx8mm-venice-gw71xx-0x.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/freescale/.imx8mm-venice-gw71xx-0x.dtb.dts.tmp arch/arm64/boot/dts/freescale/imx8mm-venice-gw71xx-0x.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/freescale/imx8mm-venice-gw71xx-0x.dtb -b 0 -iarch/arm64/boot/dts/freescale/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/freescale/.imx8mm-venice-gw71xx-0x.dtb.d.dtc.tmp arch/arm64/boot/dts/freescale/.imx8mm-venice-gw71xx-0x.dtb.dts.tmp ; cat arch/arm64/boot/dts/freescale/.imx8mm-venice-gw71xx-0x.dtb.d.pre.tmp arch/arm64/boot/dts/freescale/.imx8mm-venice-gw71xx-0x.dtb.d.dtc.tmp > arch/arm64/boot/dts/freescale/.imx8mm-venice-gw71xx-0x.dtb.d

source_arch/arm64/boot/dts/freescale/imx8mm-venice-gw71xx-0x.dtb := arch/arm64/boot/dts/freescale/imx8mm-venice-gw71xx-0x.dts

deps_arch/arm64/boot/dts/freescale/imx8mm-venice-gw71xx-0x.dtb := \
  arch/arm64/boot/dts/freescale/imx8mm.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/imx8mm-clock.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/power/imx8mm-power.h \
  scripts/dtc/include-prefixes/dt-bindings/reset/imx8mq-reset.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  arch/arm64/boot/dts/freescale/imx8mm-pinfunc.h \
  arch/arm64/boot/dts/freescale/imx8mm-venice-gw700x.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/net/ti-dp83867.h \
  arch/arm64/boot/dts/freescale/imx8mm-venice-gw71xx.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/leds/common.h \
  scripts/dtc/include-prefixes/dt-bindings/phy/phy-imx8-pcie.h \

arch/arm64/boot/dts/freescale/imx8mm-venice-gw71xx-0x.dtb: $(deps_arch/arm64/boot/dts/freescale/imx8mm-venice-gw71xx-0x.dtb)

$(deps_arch/arm64/boot/dts/freescale/imx8mm-venice-gw71xx-0x.dtb):