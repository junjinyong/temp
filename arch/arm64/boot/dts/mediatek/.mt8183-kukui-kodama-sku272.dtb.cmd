cmd_arch/arm64/boot/dts/mediatek/mt8183-kukui-kodama-sku272.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/mediatek/.mt8183-kukui-kodama-sku272.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/mediatek/.mt8183-kukui-kodama-sku272.dtb.dts.tmp arch/arm64/boot/dts/mediatek/mt8183-kukui-kodama-sku272.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/mediatek/mt8183-kukui-kodama-sku272.dtb -b 0 -iarch/arm64/boot/dts/mediatek/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/mediatek/.mt8183-kukui-kodama-sku272.dtb.d.dtc.tmp arch/arm64/boot/dts/mediatek/.mt8183-kukui-kodama-sku272.dtb.dts.tmp ; cat arch/arm64/boot/dts/mediatek/.mt8183-kukui-kodama-sku272.dtb.d.pre.tmp arch/arm64/boot/dts/mediatek/.mt8183-kukui-kodama-sku272.dtb.d.dtc.tmp > arch/arm64/boot/dts/mediatek/.mt8183-kukui-kodama-sku272.dtb.d

source_arch/arm64/boot/dts/mediatek/mt8183-kukui-kodama-sku272.dtb := arch/arm64/boot/dts/mediatek/mt8183-kukui-kodama-sku272.dts

deps_arch/arm64/boot/dts/mediatek/mt8183-kukui-kodama-sku272.dtb := \
  arch/arm64/boot/dts/mediatek/mt8183-kukui-kodama.dtsi \
  arch/arm64/boot/dts/mediatek/mt8183-kukui.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  arch/arm64/boot/dts/mediatek/mt8183.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/mt8183-clk.h \
  scripts/dtc/include-prefixes/dt-bindings/gce/mt8183-gce.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/memory/mt8183-larb-port.h \
  scripts/dtc/include-prefixes/dt-bindings/memory/mtk-memory-port.h \
  scripts/dtc/include-prefixes/dt-bindings/power/mt8183-power.h \
  scripts/dtc/include-prefixes/dt-bindings/reset/mt8183-resets.h \
  scripts/dtc/include-prefixes/dt-bindings/phy/phy.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/mt8183-pinfunc.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/mt65xx.h \
  arch/arm64/boot/dts/mediatek/mt6358.dtsi \
  scripts/dtc/include-prefixes/arm/cros-ec-keyboard.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/input/cros-ec-keyboard.h \
  scripts/dtc/include-prefixes/arm/cros-ec-sbs.dtsi \
  arch/arm64/boot/dts/mediatek/mt8183-kukui-audio-ts3a227e-max98357a.dtsi \
  arch/arm64/boot/dts/mediatek/mt8183-kukui-audio-max98357a.dtsi \
  arch/arm64/boot/dts/mediatek/mt8183-kukui-audio-ts3a227e.dtsi \

arch/arm64/boot/dts/mediatek/mt8183-kukui-kodama-sku272.dtb: $(deps_arch/arm64/boot/dts/mediatek/mt8183-kukui-kodama-sku272.dtb)

$(deps_arch/arm64/boot/dts/mediatek/mt8183-kukui-kodama-sku272.dtb):
