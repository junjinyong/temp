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

SYMBOL_CRC(slhc_init, 0x15f90688, "");
SYMBOL_CRC(slhc_free, 0x2a928918, "");
SYMBOL_CRC(slhc_remember, 0x43f9ebc8, "");
SYMBOL_CRC(slhc_compress, 0xdcdc0040, "");
SYMBOL_CRC(slhc_uncompress, 0xf36f42a9, "");
SYMBOL_CRC(slhc_toss, 0x74b8e674, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x449ad0a7, "memcmp" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EC35416A499162479A3D3C7");
