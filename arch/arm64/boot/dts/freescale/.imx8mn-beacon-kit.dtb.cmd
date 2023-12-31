cmd_arch/arm64/boot/dts/freescale/imx8mn-beacon-kit.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/freescale/.imx8mn-beacon-kit.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/freescale/.imx8mn-beacon-kit.dtb.dts.tmp arch/arm64/boot/dts/freescale/imx8mn-beacon-kit.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/freescale/imx8mn-beacon-kit.dtb -b 0 -iarch/arm64/boot/dts/freescale/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/freescale/.imx8mn-beacon-kit.dtb.d.dtc.tmp arch/arm64/boot/dts/freescale/.imx8mn-beacon-kit.dtb.dts.tmp ; cat arch/arm64/boot/dts/freescale/.imx8mn-beacon-kit.dtb.d.pre.tmp arch/arm64/boot/dts/freescale/.imx8mn-beacon-kit.dtb.d.dtc.tmp > arch/arm64/boot/dts/freescale/.imx8mn-beacon-kit.dtb.d

source_arch/arm64/boot/dts/freescale/imx8mn-beacon-kit.dtb := arch/arm64/boot/dts/freescale/imx8mn-beacon-kit.dts

deps_arch/arm64/boot/dts/freescale/imx8mn-beacon-kit.dtb := \
  arch/arm64/boot/dts/freescale/imx8mn.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/imx8mn-clock.h \
  scripts/dtc/include-prefixes/dt-bindings/power/imx8mn-power.h \
  scripts/dtc/include-prefixes/dt-bindings/reset/imx8mq-reset.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  arch/arm64/boot/dts/freescale/imx8mn-pinfunc.h \
  arch/arm64/boot/dts/freescale/imx8mn-beacon-som.dtsi \
  arch/arm64/boot/dts/freescale/imx8mn-beacon-baseboard.dtsi \

arch/arm64/boot/dts/freescale/imx8mn-beacon-kit.dtb: $(deps_arch/arm64/boot/dts/freescale/imx8mn-beacon-kit.dtb)

$(deps_arch/arm64/boot/dts/freescale/imx8mn-beacon-kit.dtb):
