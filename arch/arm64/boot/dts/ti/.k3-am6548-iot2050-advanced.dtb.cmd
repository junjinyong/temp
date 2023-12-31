cmd_arch/arm64/boot/dts/ti/k3-am6548-iot2050-advanced.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/ti/.k3-am6548-iot2050-advanced.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/ti/.k3-am6548-iot2050-advanced.dtb.dts.tmp arch/arm64/boot/dts/ti/k3-am6548-iot2050-advanced.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/ti/k3-am6548-iot2050-advanced.dtb -b 0 -iarch/arm64/boot/dts/ti/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/ti/.k3-am6548-iot2050-advanced.dtb.d.dtc.tmp arch/arm64/boot/dts/ti/.k3-am6548-iot2050-advanced.dtb.dts.tmp ; cat arch/arm64/boot/dts/ti/.k3-am6548-iot2050-advanced.dtb.d.pre.tmp arch/arm64/boot/dts/ti/.k3-am6548-iot2050-advanced.dtb.d.dtc.tmp > arch/arm64/boot/dts/ti/.k3-am6548-iot2050-advanced.dtb.d

source_arch/arm64/boot/dts/ti/k3-am6548-iot2050-advanced.dtb := arch/arm64/boot/dts/ti/k3-am6548-iot2050-advanced.dts

deps_arch/arm64/boot/dts/ti/k3-am6548-iot2050-advanced.dtb := \
  arch/arm64/boot/dts/ti/k3-am6548-iot2050-advanced-common.dtsi \
  arch/arm64/boot/dts/ti/k3-am65-iot2050-common.dtsi \
  arch/arm64/boot/dts/ti/k3-am654.dtsi \
  arch/arm64/boot/dts/ti/k3-am65.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/k3.h \
  scripts/dtc/include-prefixes/dt-bindings/soc/ti,sci_pm_domain.h \
  arch/arm64/boot/dts/ti/k3-am65-main.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/phy/phy-am654-serdes.h \
  arch/arm64/boot/dts/ti/k3-am65-mcu.dtsi \
  arch/arm64/boot/dts/ti/k3-am65-wakeup.dtsi \
  arch/arm64/boot/dts/ti/k3-am654-industrial-thermal.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  scripts/dtc/include-prefixes/dt-bindings/phy/phy.h \
  arch/arm64/boot/dts/ti/k3-am65-iot2050-common-pg1.dtsi \

arch/arm64/boot/dts/ti/k3-am6548-iot2050-advanced.dtb: $(deps_arch/arm64/boot/dts/ti/k3-am6548-iot2050-advanced.dtb)

$(deps_arch/arm64/boot/dts/ti/k3-am6548-iot2050-advanced.dtb):
