cmd_arch/arm64/boot/dts/renesas/r8a779f0-spider.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/renesas/.r8a779f0-spider.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/renesas/.r8a779f0-spider.dtb.dts.tmp arch/arm64/boot/dts/renesas/r8a779f0-spider.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/renesas/r8a779f0-spider.dtb -b 0 -iarch/arm64/boot/dts/renesas/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/renesas/.r8a779f0-spider.dtb.d.dtc.tmp arch/arm64/boot/dts/renesas/.r8a779f0-spider.dtb.dts.tmp ; cat arch/arm64/boot/dts/renesas/.r8a779f0-spider.dtb.d.pre.tmp arch/arm64/boot/dts/renesas/.r8a779f0-spider.dtb.d.dtc.tmp > arch/arm64/boot/dts/renesas/.r8a779f0-spider.dtb.d

source_arch/arm64/boot/dts/renesas/r8a779f0-spider.dtb := arch/arm64/boot/dts/renesas/r8a779f0-spider.dts

deps_arch/arm64/boot/dts/renesas/r8a779f0-spider.dtb := \
  arch/arm64/boot/dts/renesas/r8a779f0-spider-cpu.dtsi \
  arch/arm64/boot/dts/renesas/r8a779f0.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/r8a779f0-cpg-mssr.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/renesas-cpg-mssr.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/power/r8a779f0-sysc.h \
  arch/arm64/boot/dts/renesas/r8a779f0-spider-ethernet.dtsi \

arch/arm64/boot/dts/renesas/r8a779f0-spider.dtb: $(deps_arch/arm64/boot/dts/renesas/r8a779f0-spider.dtb)

$(deps_arch/arm64/boot/dts/renesas/r8a779f0-spider.dtb):
