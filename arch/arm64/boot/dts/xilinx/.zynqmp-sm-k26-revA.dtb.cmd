cmd_arch/arm64/boot/dts/xilinx/zynqmp-sm-k26-revA.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/xilinx/.zynqmp-sm-k26-revA.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/xilinx/.zynqmp-sm-k26-revA.dtb.dts.tmp arch/arm64/boot/dts/xilinx/zynqmp-sm-k26-revA.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/xilinx/zynqmp-sm-k26-revA.dtb -b 0 -iarch/arm64/boot/dts/xilinx/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -@ -d arch/arm64/boot/dts/xilinx/.zynqmp-sm-k26-revA.dtb.d.dtc.tmp arch/arm64/boot/dts/xilinx/.zynqmp-sm-k26-revA.dtb.dts.tmp ; cat arch/arm64/boot/dts/xilinx/.zynqmp-sm-k26-revA.dtb.d.pre.tmp arch/arm64/boot/dts/xilinx/.zynqmp-sm-k26-revA.dtb.d.dtc.tmp > arch/arm64/boot/dts/xilinx/.zynqmp-sm-k26-revA.dtb.d

source_arch/arm64/boot/dts/xilinx/zynqmp-sm-k26-revA.dtb := arch/arm64/boot/dts/xilinx/zynqmp-sm-k26-revA.dts

deps_arch/arm64/boot/dts/xilinx/zynqmp-sm-k26-revA.dtb := \
  arch/arm64/boot/dts/xilinx/zynqmp.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/dma/xlnx-zynqmp-dpdma.h \
  scripts/dtc/include-prefixes/dt-bindings/power/xlnx-zynqmp-power.h \
  scripts/dtc/include-prefixes/dt-bindings/reset/xlnx-zynqmp-resets.h \
  arch/arm64/boot/dts/xilinx/zynqmp-clk-ccf.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/xlnx-zynqmp-clk.h \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/phy/phy.h \

arch/arm64/boot/dts/xilinx/zynqmp-sm-k26-revA.dtb: $(deps_arch/arm64/boot/dts/xilinx/zynqmp-sm-k26-revA.dtb)

$(deps_arch/arm64/boot/dts/xilinx/zynqmp-sm-k26-revA.dtb):
