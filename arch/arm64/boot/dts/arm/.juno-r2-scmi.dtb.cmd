cmd_arch/arm64/boot/dts/arm/juno-r2-scmi.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/arm/.juno-r2-scmi.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/arm/.juno-r2-scmi.dtb.dts.tmp arch/arm64/boot/dts/arm/juno-r2-scmi.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/arm/juno-r2-scmi.dtb -b 0 -iarch/arm64/boot/dts/arm/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/arm/.juno-r2-scmi.dtb.d.dtc.tmp arch/arm64/boot/dts/arm/.juno-r2-scmi.dtb.dts.tmp ; cat arch/arm64/boot/dts/arm/.juno-r2-scmi.dtb.d.pre.tmp arch/arm64/boot/dts/arm/.juno-r2-scmi.dtb.d.dtc.tmp > arch/arm64/boot/dts/arm/.juno-r2-scmi.dtb.d

source_arch/arm64/boot/dts/arm/juno-r2-scmi.dtb := arch/arm64/boot/dts/arm/juno-r2-scmi.dts

deps_arch/arm64/boot/dts/arm/juno-r2-scmi.dtb := \
  arch/arm64/boot/dts/arm/juno-r2.dts \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/arm/coresight-cti-dt.h \
  arch/arm64/boot/dts/arm/juno-base.dtsi \
  arch/arm64/boot/dts/arm/juno-clocks.dtsi \
  arch/arm64/boot/dts/arm/juno-motherboard.dtsi \
  arch/arm64/boot/dts/arm/juno-cs-r1r2.dtsi \
  arch/arm64/boot/dts/arm/juno-scmi.dtsi \

arch/arm64/boot/dts/arm/juno-r2-scmi.dtb: $(deps_arch/arm64/boot/dts/arm/juno-r2-scmi.dtb)

$(deps_arch/arm64/boot/dts/arm/juno-r2-scmi.dtb):
