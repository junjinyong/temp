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

MODULE_INFO(depends, "drm,drm_kms_helper,cec,drm_dma_helper,meson-canvas");

MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-vpu");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-vpuC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxl-vpu");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxl-vpuC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxm-vpu");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxm-vpuC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-vpu");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-vpuC*");
