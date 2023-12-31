cmd_arch/arm64/boot/dts/ti/k3-am625-sk.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/ti/.k3-am625-sk.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/ti/.k3-am625-sk.dtb.dts.tmp arch/arm64/boot/dts/ti/k3-am625-sk.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/ti/k3-am625-sk.dtb -b 0 -iarch/arm64/boot/dts/ti/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/ti/.k3-am625-sk.dtb.d.dtc.tmp arch/arm64/boot/dts/ti/.k3-am625-sk.dtb.dts.tmp ; cat arch/arm64/boot/dts/ti/.k3-am625-sk.dtb.d.pre.tmp arch/arm64/boot/dts/ti/.k3-am625-sk.dtb.d.dtc.tmp > arch/arm64/boot/dts/ti/.k3-am625-sk.dtb.d

source_arch/arm64/boot/dts/ti/k3-am625-sk.dtb := arch/arm64/boot/dts/ti/k3-am625-sk.dts

deps_arch/arm64/boot/dts/ti/k3-am625-sk.dtb := \
  scripts/dtc/include-prefixes/dt-bindings/leds/common.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/net/ti-dp83867.h \
  arch/arm64/boot/dts/ti/k3-am625.dtsi \
  arch/arm64/boot/dts/ti/k3-am62.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/k3.h \
  scripts/dtc/include-prefixes/dt-bindings/soc/ti,sci_pm_domain.h \
  arch/arm64/boot/dts/ti/k3-am62-main.dtsi \
  arch/arm64/boot/dts/ti/k3-am62-mcu.dtsi \
  arch/arm64/boot/dts/ti/k3-am62-wakeup.dtsi \

arch/arm64/boot/dts/ti/k3-am625-sk.dtb: $(deps_arch/arm64/boot/dts/ti/k3-am625-sk.dtb)

$(deps_arch/arm64/boot/dts/ti/k3-am625-sk.dtb):
