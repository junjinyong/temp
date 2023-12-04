cmd_arch/arm64/boot/dts/renesas/draak-ebisu-panel-aa104xd12.dtbo := gcc -E -Wp,-MMD,arch/arm64/boot/dts/renesas/.draak-ebisu-panel-aa104xd12.dtbo.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/renesas/.draak-ebisu-panel-aa104xd12.dtbo.dts.tmp arch/arm64/boot/dts/renesas/draak-ebisu-panel-aa104xd12.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/renesas/draak-ebisu-panel-aa104xd12.dtbo -b 0 -iarch/arm64/boot/dts/renesas/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/renesas/.draak-ebisu-panel-aa104xd12.dtbo.d.dtc.tmp arch/arm64/boot/dts/renesas/.draak-ebisu-panel-aa104xd12.dtbo.dts.tmp ; cat arch/arm64/boot/dts/renesas/.draak-ebisu-panel-aa104xd12.dtbo.d.pre.tmp arch/arm64/boot/dts/renesas/.draak-ebisu-panel-aa104xd12.dtbo.d.dtc.tmp > arch/arm64/boot/dts/renesas/.draak-ebisu-panel-aa104xd12.dtbo.d

source_arch/arm64/boot/dts/renesas/draak-ebisu-panel-aa104xd12.dtbo := arch/arm64/boot/dts/renesas/draak-ebisu-panel-aa104xd12.dts

deps_arch/arm64/boot/dts/renesas/draak-ebisu-panel-aa104xd12.dtbo := \
  arch/arm64/boot/dts/renesas/panel-aa104xd12.dtsi \

arch/arm64/boot/dts/renesas/draak-ebisu-panel-aa104xd12.dtbo: $(deps_arch/arm64/boot/dts/renesas/draak-ebisu-panel-aa104xd12.dtbo)

$(deps_arch/arm64/boot/dts/renesas/draak-ebisu-panel-aa104xd12.dtbo):
