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
	{ 0x972a3723, "consume_skb" },
	{ 0x56962cfc, "ether_setup" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb310efd8, "nla_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdcb764ad, "memset" },
	{ 0x942352e7, "genlmsg_put" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3fa29299, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x9060fc6c, "ieee80211_rx_irqsafe" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd4bdd253, "ieee80211_find_sta_by_link_addrs" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x275ae254, "simple_attr_open" },
	{ 0xac984a2e, "ieee80211_radar_detected" },
	{ 0x56470118, "__warn_printk" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xfda68b32, "__cfg80211_alloc_event_skb" },
	{ 0xf6790faa, "__cfg80211_send_event_skb" },
	{ 0x209f749c, "__cfg80211_alloc_reply_skb" },
	{ 0x4b4a4ba2, "cfg80211_vendor_cmd_reply" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7996285a, "ieee80211_queue_delayed_work" },
	{ 0x20622777, "ieee80211_remain_on_channel_expired" },
	{ 0x4fc00d0c, "ieee80211_ready_on_channel" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x5ebe9ad0, "ieee80211_scan_completed" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x35c3640f, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x61685b5a, "ieee80211_free_txskb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf98f70d4, "genl_notify" },
	{ 0x459e03b6, "init_net" },
	{ 0xe739bb49, "netlink_broadcast" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0xd6e7ca0b, "ieee80211_unregister_hw" },
	{ 0x518262a, "device_release_driver" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0x6603d2cc, "ieee80211_free_hw" },
	{ 0x3486581a, "class_destroy" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xfc2bbbe6, "genl_unregister_family" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd5ddc6e6, "ieee80211_tx_status_irqsafe" },
	{ 0x5fad0041, "ieee80211_get_channel_khz" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92997ed8, "_printk" },
	{ 0xffb7c514, "ida_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xa91d6818, "skb_copy_expand" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1f1bbd31, "skb_copy" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x86adafd6, "skb_add_rx_frag" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7aa9285d, "__skb_ext_put" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x293f231f, "ieee80211_get_tx_rates" },
	{ 0xbf6d2360, "ieee80211_tx_prepare_skb" },
	{ 0x80d29e3f, "ieee80211_probereq_get" },
	{ 0x9634c22c, "ieee80211_nullfunc_get" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x69c1efbc, "ieee80211_alloc_hw_nm" },
	{ 0xa4a9ecb6, "device_create" },
	{ 0x8da344d3, "device_bind_driver" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7c592253, "wiphy_apply_custom_regulatory" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xef9abb20, "ieee80211_register_hw" },
	{ 0x98ff2517, "regulatory_hint" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0x73820201, "register_pernet_device" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xa67cd91b, "genl_register_family" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x853d16c8, "__class_create" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6f850b71, "dev_alloc_name" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x9a099bc2, "ieee80211_beacon_get_tim" },
	{ 0x27aa4858, "ieee80211_get_buffered_bc" },
	{ 0x2b750f85, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0x4da19555, "ieee80211_csa_finish" },
	{ 0xe060712c, "ieee80211_set_active_links_async" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x57827ec9, "debugfs_attr_read" },
	{ 0x8dad64f7, "debugfs_attr_write" },
	{ 0xea15f280, "simple_attr_release" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "3F0D06B997D7CDBED3E7EF1");