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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(register_mtd_chip_driver, 0xff96efa4, "");
SYMBOL_CRC(unregister_mtd_chip_driver, 0x07f9bc30, "");
SYMBOL_CRC(do_map_probe, 0x8604cac0, "");
SYMBOL_CRC(map_destroy, 0xc3a4f65d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1425e33, "try_module_get" },
	{ 0xcc793c4a, "module_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x37a0cba, "kfree" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7680519B1FE457786231F1E");
