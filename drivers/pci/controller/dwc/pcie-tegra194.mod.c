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

MODULE_ALIAS("of:N*T*Cnvidia,tegra194-pcie");
MODULE_ALIAS("of:N*T*Cnvidia,tegra194-pcieC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra194-pcie-ep");
MODULE_ALIAS("of:N*T*Cnvidia,tegra194-pcie-epC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra234-pcie");
MODULE_ALIAS("of:N*T*Cnvidia,tegra234-pcieC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra234-pcie-ep");
MODULE_ALIAS("of:N*T*Cnvidia,tegra234-pcie-epC*");
