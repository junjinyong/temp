cmd_arch/arm64/boot/dts/freescale/fsl-ls1028a-kontron-sl28-var4.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/freescale/.fsl-ls1028a-kontron-sl28-var4.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/freescale/.fsl-ls1028a-kontron-sl28-var4.dtb.dts.tmp arch/arm64/boot/dts/freescale/fsl-ls1028a-kontron-sl28-var4.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/freescale/fsl-ls1028a-kontron-sl28-var4.dtb -b 0 -iarch/arm64/boot/dts/freescale/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/freescale/.fsl-ls1028a-kontron-sl28-var4.dtb.d.dtc.tmp arch/arm64/boot/dts/freescale/.fsl-ls1028a-kontron-sl28-var4.dtb.dts.tmp ; cat arch/arm64/boot/dts/freescale/.fsl-ls1028a-kontron-sl28-var4.dtb.d.pre.tmp arch/arm64/boot/dts/freescale/.fsl-ls1028a-kontron-sl28-var4.dtb.d.dtc.tmp > arch/arm64/boot/dts/freescale/.fsl-ls1028a-kontron-sl28-var4.dtb.d

source_arch/arm64/boot/dts/freescale/fsl-ls1028a-kontron-sl28-var4.dtb := arch/arm64/boot/dts/freescale/fsl-ls1028a-kontron-sl28-var4.dts

deps_arch/arm64/boot/dts/freescale/fsl-ls1028a-kontron-sl28-var4.dtb := \
  arch/arm64/boot/dts/freescale/fsl-ls1028a-kontron-sl28.dts \
  arch/arm64/boot/dts/freescale/fsl-ls1028a.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/fsl,qoriq-clockgen.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/net/qca-ar803x.h \

arch/arm64/boot/dts/freescale/fsl-ls1028a-kontron-sl28-var4.dtb: $(deps_arch/arm64/boot/dts/freescale/fsl-ls1028a-kontron-sl28-var4.dtb)

$(deps_arch/arm64/boot/dts/freescale/fsl-ls1028a-kontron-sl28-var4.dtb):
