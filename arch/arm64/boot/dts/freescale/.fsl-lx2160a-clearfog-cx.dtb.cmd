cmd_arch/arm64/boot/dts/freescale/fsl-lx2160a-clearfog-cx.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/freescale/.fsl-lx2160a-clearfog-cx.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/freescale/.fsl-lx2160a-clearfog-cx.dtb.dts.tmp arch/arm64/boot/dts/freescale/fsl-lx2160a-clearfog-cx.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/freescale/fsl-lx2160a-clearfog-cx.dtb -b 0 -iarch/arm64/boot/dts/freescale/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/freescale/.fsl-lx2160a-clearfog-cx.dtb.d.dtc.tmp arch/arm64/boot/dts/freescale/.fsl-lx2160a-clearfog-cx.dtb.dts.tmp ; cat arch/arm64/boot/dts/freescale/.fsl-lx2160a-clearfog-cx.dtb.d.pre.tmp arch/arm64/boot/dts/freescale/.fsl-lx2160a-clearfog-cx.dtb.d.dtc.tmp > arch/arm64/boot/dts/freescale/.fsl-lx2160a-clearfog-cx.dtb.d

source_arch/arm64/boot/dts/freescale/fsl-lx2160a-clearfog-cx.dtb := arch/arm64/boot/dts/freescale/fsl-lx2160a-clearfog-cx.dts

deps_arch/arm64/boot/dts/freescale/fsl-lx2160a-clearfog-cx.dtb := \
  arch/arm64/boot/dts/freescale/fsl-lx2160a-clearfog-itx.dtsi \
  arch/arm64/boot/dts/freescale/fsl-lx2160a-cex7.dtsi \
  arch/arm64/boot/dts/freescale/fsl-lx2160a.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/fsl,qoriq-clockgen.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \

arch/arm64/boot/dts/freescale/fsl-lx2160a-clearfog-cx.dtb: $(deps_arch/arm64/boot/dts/freescale/fsl-lx2160a-clearfog-cx.dtb)

$(deps_arch/arm64/boot/dts/freescale/fsl-lx2160a-clearfog-cx.dtb):
