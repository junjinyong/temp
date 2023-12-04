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
	{ 0xd93829dd, "speakup_info" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xbbd15a51, "speakup_start_ttys" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3d7e3110, "synth_add" },
	{ 0x81a13d39, "synth_remove" },
	{ 0xdcb764ad, "memset" },
	{ 0x96601bbe, "misc_register" },
	{ 0xb734cb9d, "speakup_event" },
	{ 0xa58f0069, "synth_current" },
	{ 0x41a160e5, "synth_buffer_empty" },
	{ 0xd5f5af93, "spk_get_var_header" },
	{ 0x287366b3, "spk_set_num_var" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x96848186, "scnprintf" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x76d40046, "synth_buffer_skip_nonlatin1" },
	{ 0x84dad068, "synth_buffer_getc" },
	{ 0x88aeaec4, "spk_var_show" },
	{ 0xc38f733a, "spk_var_store" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xce17fc90, "param_ops_short" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "speakup");


MODULE_INFO(srcversion, "7DD9FD825DBC350877E126D");
