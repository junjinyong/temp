#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,ipq8074-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,ipq8074-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8996-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,msm8996-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq6018-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,ipq6018-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sc8180x-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,sc8180x-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8998-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,msm8998-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sdx55-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sdx55-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sdx65-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sdx65-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8450-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8450-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,qcm2290-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,qcm2290-qmp-usb3-phyC*");
