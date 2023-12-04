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

SYMBOL_CRC(crypto_ft_tab, 0x1a10c32b, "_gpl");
SYMBOL_CRC(crypto_it_tab, 0x56054c05, "_gpl");
SYMBOL_CRC(crypto_aes_set_key, 0x5d38d36e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x558b281d, "aes_expandkey" },
	{ 0xa1dfe5e4, "crypto_register_alg" },
	{ 0xcdeddaf7, "crypto_unregister_alg" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libaes");


MODULE_INFO(srcversion, "8638B8C73CDF9603907E378");
