cmd_arch/arm64/boot/dts/qcom/sc8280xp-lenovo-thinkpad-x13s.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/qcom/.sc8280xp-lenovo-thinkpad-x13s.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/qcom/.sc8280xp-lenovo-thinkpad-x13s.dtb.dts.tmp arch/arm64/boot/dts/qcom/sc8280xp-lenovo-thinkpad-x13s.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/qcom/sc8280xp-lenovo-thinkpad-x13s.dtb -b 0 -iarch/arm64/boot/dts/qcom/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm64/boot/dts/qcom/.sc8280xp-lenovo-thinkpad-x13s.dtb.d.dtc.tmp arch/arm64/boot/dts/qcom/.sc8280xp-lenovo-thinkpad-x13s.dtb.dts.tmp ; cat arch/arm64/boot/dts/qcom/.sc8280xp-lenovo-thinkpad-x13s.dtb.d.pre.tmp arch/arm64/boot/dts/qcom/.sc8280xp-lenovo-thinkpad-x13s.dtb.d.dtc.tmp > arch/arm64/boot/dts/qcom/.sc8280xp-lenovo-thinkpad-x13s.dtb.d

source_arch/arm64/boot/dts/qcom/sc8280xp-lenovo-thinkpad-x13s.dtb := arch/arm64/boot/dts/qcom/sc8280xp-lenovo-thinkpad-x13s.dts

deps_arch/arm64/boot/dts/qcom/sc8280xp-lenovo-thinkpad-x13s.dtb := \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/regulator/qcom,rpmh-regulator.h \
  arch/arm64/boot/dts/qcom/sc8280xp.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/qcom,gcc-sc8280xp.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/qcom,rpmh.h \
  scripts/dtc/include-prefixes/dt-bindings/interconnect/qcom,sc8280xp.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/mailbox/qcom-ipcc.h \
  scripts/dtc/include-prefixes/dt-bindings/power/qcom-rpmpd.h \
  scripts/dtc/include-prefixes/dt-bindings/soc/qcom,rpmh-rsc.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  arch/arm64/boot/dts/qcom/sc8280xp-pmics.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/spmi/spmi.h \

arch/arm64/boot/dts/qcom/sc8280xp-lenovo-thinkpad-x13s.dtb: $(deps_arch/arm64/boot/dts/qcom/sc8280xp-lenovo-thinkpad-x13s.dtb)

$(deps_arch/arm64/boot/dts/qcom/sc8280xp-lenovo-thinkpad-x13s.dtb):
