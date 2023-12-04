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

SYMBOL_CRC(poly1305_core_setkey, 0xd45b9cf4, "");
SYMBOL_CRC(poly1305_core_blocks, 0x021f3700, "");
SYMBOL_CRC(poly1305_core_emit, 0xbcb90cb3, "");
SYMBOL_CRC(poly1305_init_generic, 0x8c874435, "_gpl");
SYMBOL_CRC(poly1305_update_generic, 0x39e8fa4b, "_gpl");
SYMBOL_CRC(poly1305_final_generic, 0x4a833012, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1695AC7B98916D8325A3CB9");
