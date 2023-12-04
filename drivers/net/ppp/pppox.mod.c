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

SYMBOL_CRC(register_pppox_proto, 0xb2fb5ec7, "");
SYMBOL_CRC(unregister_pppox_proto, 0xe0ff7a18, "");
SYMBOL_CRC(pppox_unbind_sock, 0xdfa8d968, "");
SYMBOL_CRC(pppox_ioctl, 0x1fbf1c22, "");
SYMBOL_CRC(pppox_compat_ioctl, 0x9c2e68ce, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd94ec690, "ppp_unregister_channel" },
	{ 0x6a5932c1, "sock_register" },
	{ 0x1425e33, "try_module_get" },
	{ 0xcc793c4a, "module_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x6b2baf52, "release_sock" },
	{ 0xb5c3dcfb, "ppp_channel_index" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ppp_generic");


MODULE_INFO(srcversion, "01B6ECBE6751CB63A1D543B");
