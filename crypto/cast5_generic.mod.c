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

SYMBOL_CRC(__cast5_encrypt, 0xef81a4af, "_gpl");
SYMBOL_CRC(__cast5_decrypt, 0x188d9d26, "_gpl");
SYMBOL_CRC(cast5_setkey, 0x819a02fc, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4829a47e, "memcpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa1dfe5e4, "crypto_register_alg" },
	{ 0xcdeddaf7, "crypto_unregister_alg" },
	{ 0x5609ce41, "cast_s2" },
	{ 0xbd3e7542, "cast_s1" },
	{ 0xb9cba57f, "cast_s3" },
	{ 0x5b17be06, "cast_s4" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cast_common");


MODULE_INFO(srcversion, "2896C2866AA2C2E86AFA558");
