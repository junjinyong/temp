cmd_arch/arm64/boot/dts/mediatek/mt7622-bananapi-bpi-r64.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/mediatek/.mt7622-bananapi-bpi-r64.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/mediatek/.mt7622-bananapi-bpi-r64.dtb.dts.tmp arch/arm64/boot/dts/mediatek/mt7622-bananapi-bpi-r64.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/mediatek/mt7622-bananapi-bpi-r64.dtb -b 0 -iarch/arm64/boot/dts/mediatek/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/mediatek/.mt7622-bananapi-bpi-r64.dtb.d.dtc.tmp arch/arm64/boot/dts/mediatek/.mt7622-bananapi-bpi-r64.dtb.dts.tmp ; cat arch/arm64/boot/dts/mediatek/.mt7622-bananapi-bpi-r64.dtb.d.pre.tmp arch/arm64/boot/dts/mediatek/.mt7622-bananapi-bpi-r64.dtb.d.dtc.tmp > arch/arm64/boot/dts/mediatek/.mt7622-bananapi-bpi-r64.dtb.d

source_arch/arm64/boot/dts/mediatek/mt7622-bananapi-bpi-r64.dtb := arch/arm64/boot/dts/mediatek/mt7622-bananapi-bpi-r64.dts

deps_arch/arm64/boot/dts/mediatek/mt7622-bananapi-bpi-r64.dtb := \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/leds/common.h \
  arch/arm64/boot/dts/mediatek/mt7622.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/mt7622-clk.h \
  scripts/dtc/include-prefixes/dt-bindings/phy/phy.h \
  scripts/dtc/include-prefixes/dt-bindings/power/mt7622-power.h \
  scripts/dtc/include-prefixes/dt-bindings/reset/mt7622-reset.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  arch/arm64/boot/dts/mediatek/mt6380.dtsi \

arch/arm64/boot/dts/mediatek/mt7622-bananapi-bpi-r64.dtb: $(deps_arch/arm64/boot/dts/mediatek/mt7622-bananapi-bpi-r64.dtb)

$(deps_arch/arm64/boot/dts/mediatek/mt7622-bananapi-bpi-r64.dtb):