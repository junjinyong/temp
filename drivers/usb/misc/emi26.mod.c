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


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x63230d82, "usb_register_driver" },
	{ 0x74a05018, "request_firmware" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v086Ap0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v086Ap0102d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "255FA88D19E33F9389DE750");
