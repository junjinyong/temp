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
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x92997ed8, "_printk" },
	{ 0x5e7691b, "tcf_register_action" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x86ceda07, "tcf_idrinfo_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x6c39cdeb, "tcf_action_update_stats" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb310efd8, "nla_put" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0x6955404a, "tcf_unregister_action" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbbfe0f97, "netif_receive_skb" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x6c749a91, "tcf_dev_queue_xmit" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x41ac43f6, "tcf_idr_check_alloc" },
	{ 0x36b5669e, "tcf_idr_create_from_flags" },
	{ 0x1717f0a1, "tcf_action_check_ctrlact" },
	{ 0x41f9298d, "dev_get_by_index" },
	{ 0x7360897b, "tcf_action_set_ctrlact" },
	{ 0x726013c0, "tcf_chain_put_by_act" },
	{ 0x95d94e54, "tcf_idr_release" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x88484bf5, "tcf_idr_cleanup" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf0f9eba2, "skb_pull_rcsum" },
	{ 0x461c9d06, "skb_clone" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x349cba85, "strchr" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A138DCEA8009C898F21874D");