cmd_arch/arm64/boot/dts/freescale/imx8dxl-evk.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/freescale/.imx8dxl-evk.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/freescale/.imx8dxl-evk.dtb.dts.tmp arch/arm64/boot/dts/freescale/imx8dxl-evk.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/freescale/imx8dxl-evk.dtb -b 0 -iarch/arm64/boot/dts/freescale/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/freescale/.imx8dxl-evk.dtb.d.dtc.tmp arch/arm64/boot/dts/freescale/.imx8dxl-evk.dtb.dts.tmp ; cat arch/arm64/boot/dts/freescale/.imx8dxl-evk.dtb.d.pre.tmp arch/arm64/boot/dts/freescale/.imx8dxl-evk.dtb.d.dtc.tmp > arch/arm64/boot/dts/freescale/.imx8dxl-evk.dtb.d

source_arch/arm64/boot/dts/freescale/imx8dxl-evk.dtb := arch/arm64/boot/dts/freescale/imx8dxl-evk.dts

deps_arch/arm64/boot/dts/freescale/imx8dxl-evk.dtb := \
  arch/arm64/boot/dts/freescale/imx8dxl.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/imx8-clock.h \
  scripts/dtc/include-prefixes/dt-bindings/firmware/imx/rsrc.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/pads-imx8dxl.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  arch/arm64/boot/dts/freescale/imx8-ss-adma.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-audio.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/imx8-lpcg.h \
  arch/arm64/boot/dts/freescale/imx8-ss-dma.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-conn.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-ddr.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-lsio.dtsi \
  arch/arm64/boot/dts/freescale/imx8dxl-ss-adma.dtsi \
  arch/arm64/boot/dts/freescale/imx8dxl-ss-conn.dtsi \
  arch/arm64/boot/dts/freescale/imx8dxl-ss-lsio.dtsi \
  arch/arm64/boot/dts/freescale/imx8dxl-ss-ddr.dtsi \

arch/arm64/boot/dts/freescale/imx8dxl-evk.dtb: $(deps_arch/arm64/boot/dts/freescale/imx8dxl-evk.dtb)

$(deps_arch/arm64/boot/dts/freescale/imx8dxl-evk.dtb):
