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
	{ 0x59d40baa, "register_ip_vs_scheduler" },
	{ 0xcc38913e, "ip_vs_scheduler_err" },
	{ 0x4a8d81d6, "unregister_ip_vs_scheduler" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ip_vs");


MODULE_INFO(srcversion, "A736B773ECBB766AF6A58F1");