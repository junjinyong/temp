cmd_arch/arm64/boot/dts/amlogic/meson-gxbb-vega-s95-telos.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/amlogic/.meson-gxbb-vega-s95-telos.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/amlogic/.meson-gxbb-vega-s95-telos.dtb.dts.tmp arch/arm64/boot/dts/amlogic/meson-gxbb-vega-s95-telos.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/amlogic/meson-gxbb-vega-s95-telos.dtb -b 0 -iarch/arm64/boot/dts/amlogic/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/amlogic/.meson-gxbb-vega-s95-telos.dtb.d.dtc.tmp arch/arm64/boot/dts/amlogic/.meson-gxbb-vega-s95-telos.dtb.dts.tmp ; cat arch/arm64/boot/dts/amlogic/.meson-gxbb-vega-s95-telos.dtb.d.pre.tmp arch/arm64/boot/dts/amlogic/.meson-gxbb-vega-s95-telos.dtb.d.dtc.tmp > arch/arm64/boot/dts/amlogic/.meson-gxbb-vega-s95-telos.dtb.d

source_arch/arm64/boot/dts/amlogic/meson-gxbb-vega-s95-telos.dtb := arch/arm64/boot/dts/amlogic/meson-gxbb-vega-s95-telos.dts

deps_arch/arm64/boot/dts/amlogic/meson-gxbb-vega-s95-telos.dtb := \
  arch/arm64/boot/dts/amlogic/meson-gxbb-vega-s95.dtsi \
  arch/arm64/boot/dts/amlogic/meson-gxbb.dtsi \
  arch/arm64/boot/dts/amlogic/meson-gx.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/power/meson-gxbb-power.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  arch/arm64/boot/dts/amlogic/meson-gx-mali450.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/gpio/meson-gxbb-gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/reset/amlogic,meson-gxbb-reset.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/gxbb-clkc.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/gxbb-aoclkc.h \
  scripts/dtc/include-prefixes/dt-bindings/reset/gxbb-aoclkc.h \
  scripts/dtc/include-prefixes/dt-bindings/sound/meson-aiu.h \

arch/arm64/boot/dts/amlogic/meson-gxbb-vega-s95-telos.dtb: $(deps_arch/arm64/boot/dts/amlogic/meson-gxbb-vega-s95-telos.dtb)

$(deps_arch/arm64/boot/dts/amlogic/meson-gxbb-vega-s95-telos.dtb):
