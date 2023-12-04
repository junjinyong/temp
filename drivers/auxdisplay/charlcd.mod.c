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

SYMBOL_CRC(charlcd_backlight, 0xd3e29970, "_gpl");
SYMBOL_CRC(charlcd_poke, 0x09917359, "_gpl");
SYMBOL_CRC(charlcd_alloc, 0x8b45326c, "_gpl");
SYMBOL_CRC(charlcd_free, 0xf3304696, "_gpl");
SYMBOL_CRC(charlcd_register, 0x6fd9cc4a, "_gpl");
SYMBOL_CRC(charlcd_unregister, 0xf883c540, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xde77a6be, "nonseekable_open" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x96601bbe, "misc_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "10CC2A5C80129634D2F3849");
