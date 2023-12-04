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
	{ 0x1c149c2e, "__hid_register_driver" },
	{ 0x441916ec, "input_event" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0x89198190, "hid_hw_start" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004B4p0000DE61");
MODULE_ALIAS("hid:b0003g*v000004B4p0000DE64");
MODULE_ALIAS("hid:b0003g*v000004B4p0000BCA1");
MODULE_ALIAS("hid:b0003g*v000004B4p0000ED81");
MODULE_ALIAS("hid:b0003g*v000004B4p00000001");
MODULE_ALIAS("hid:b0003g*v000004B4p000007B1");

MODULE_INFO(srcversion, "A482A7118DDC4A7598D79FB");