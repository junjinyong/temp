cmd_arch/arm64/boot/dts/intel/socfpga_agilex_n6000.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/intel/.socfpga_agilex_n6000.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/intel/.socfpga_agilex_n6000.dtb.dts.tmp arch/arm64/boot/dts/intel/socfpga_agilex_n6000.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/intel/socfpga_agilex_n6000.dtb -b 0 -iarch/arm64/boot/dts/intel/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/intel/.socfpga_agilex_n6000.dtb.d.dtc.tmp arch/arm64/boot/dts/intel/.socfpga_agilex_n6000.dtb.dts.tmp ; cat arch/arm64/boot/dts/intel/.socfpga_agilex_n6000.dtb.d.pre.tmp arch/arm64/boot/dts/intel/.socfpga_agilex_n6000.dtb.d.dtc.tmp > arch/arm64/boot/dts/intel/.socfpga_agilex_n6000.dtb.d

source_arch/arm64/boot/dts/intel/socfpga_agilex_n6000.dtb := arch/arm64/boot/dts/intel/socfpga_agilex_n6000.dts

deps_arch/arm64/boot/dts/intel/socfpga_agilex_n6000.dtb := \
  arch/arm64/boot/dts/intel/socfpga_agilex.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/reset/altr,rst-mgr-s10.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/agilex-clock.h \

arch/arm64/boot/dts/intel/socfpga_agilex_n6000.dtb: $(deps_arch/arm64/boot/dts/intel/socfpga_agilex_n6000.dtb)

$(deps_arch/arm64/boot/dts/intel/socfpga_agilex_n6000.dtb):
