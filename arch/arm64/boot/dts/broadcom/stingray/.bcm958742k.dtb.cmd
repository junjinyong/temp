cmd_arch/arm64/boot/dts/broadcom/stingray/bcm958742k.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/broadcom/stingray/.bcm958742k.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/broadcom/stingray/.bcm958742k.dtb.dts.tmp arch/arm64/boot/dts/broadcom/stingray/bcm958742k.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/broadcom/stingray/bcm958742k.dtb -b 0 -iarch/arm64/boot/dts/broadcom/stingray/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/broadcom/stingray/.bcm958742k.dtb.d.dtc.tmp arch/arm64/boot/dts/broadcom/stingray/.bcm958742k.dtb.dts.tmp ; cat arch/arm64/boot/dts/broadcom/stingray/.bcm958742k.dtb.d.pre.tmp arch/arm64/boot/dts/broadcom/stingray/.bcm958742k.dtb.d.dtc.tmp > arch/arm64/boot/dts/broadcom/stingray/.bcm958742k.dtb.d

source_arch/arm64/boot/dts/broadcom/stingray/bcm958742k.dtb := arch/arm64/boot/dts/broadcom/stingray/bcm958742k.dts

deps_arch/arm64/boot/dts/broadcom/stingray/bcm958742k.dtb := \
  arch/arm64/boot/dts/broadcom/stingray/bcm958742-base.dtsi \
  arch/arm64/boot/dts/broadcom/stingray/stingray-board-base.dtsi \
  arch/arm64/boot/dts/broadcom/stingray/stingray.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  arch/arm64/boot/dts/broadcom/stingray/stingray-clock.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/bcm-sr.h \
  arch/arm64/boot/dts/broadcom/stingray/stingray-fs4.dtsi \
  arch/arm64/boot/dts/broadcom/stingray/stingray-pcie.dtsi \
  arch/arm64/boot/dts/broadcom/stingray/stingray-usb.dtsi \
  arch/arm64/boot/dts/broadcom/stingray/stingray-pinctrl.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/brcm,pinctrl-stingray.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \

arch/arm64/boot/dts/broadcom/stingray/bcm958742k.dtb: $(deps_arch/arm64/boot/dts/broadcom/stingray/bcm958742k.dtb)

$(deps_arch/arm64/boot/dts/broadcom/stingray/bcm958742k.dtb):
