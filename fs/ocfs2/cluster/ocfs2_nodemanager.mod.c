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

SYMBOL_CRC(o2hb_fill_node_map, 0x1b89c6ee, "_gpl");
SYMBOL_CRC(o2hb_setup_callback, 0xea102c33, "_gpl");
SYMBOL_CRC(o2hb_register_callback, 0xb1249153, "_gpl");
SYMBOL_CRC(o2hb_unregister_callback, 0xeb82a0f1, "_gpl");
SYMBOL_CRC(o2hb_check_node_heartbeating_no_sem, 0xbd13ee5d, "_gpl");
SYMBOL_CRC(o2hb_check_node_heartbeating_from_callback, 0xc4d99852, "_gpl");
SYMBOL_CRC(o2hb_stop_all_regions, 0x4900035b, "_gpl");
SYMBOL_CRC(o2hb_get_all_regions, 0x58c88ff2, "_gpl");
SYMBOL_CRC(o2hb_global_heartbeat_active, 0xbfd7d7a2, "");
SYMBOL_CRC(mlog_and_bits, 0x81a17396, "_gpl");
SYMBOL_CRC(mlog_not_bits, 0xf56c2017, "_gpl");
SYMBOL_CRC(__mlog_printk, 0x6a0c3847, "_gpl");
SYMBOL_CRC(o2nm_get_node_by_num, 0x486fba43, "_gpl");
SYMBOL_CRC(o2nm_configured_node_map, 0xa87bc9e7, "_gpl");
SYMBOL_CRC(o2nm_get_node_by_ip, 0x3939680c, "_gpl");
SYMBOL_CRC(o2nm_node_put, 0xb5fba071, "_gpl");
SYMBOL_CRC(o2nm_node_get, 0x44fa6a36, "_gpl");
SYMBOL_CRC(o2nm_this_node, 0xb6ebf62a, "_gpl");
SYMBOL_CRC(o2net_register_handler, 0xfe1298f3, "_gpl");
SYMBOL_CRC(o2net_unregister_handler_list, 0xf1a5611d, "_gpl");
SYMBOL_CRC(o2net_fill_node_map, 0xd859ac8c, "_gpl");
SYMBOL_CRC(o2net_send_message_vec, 0x5e95a4b2, "_gpl");
SYMBOL_CRC(o2net_send_message, 0xf982e6db, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7b5547f0, "config_group_init" },
	{ 0x20978fb9, "idr_find" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x96848186, "scnprintf" },
	{ 0x3e078bd, "config_item_get" },
	{ 0x6a0f82b4, "set_user_nice" },
	{ 0xc0052dbd, "sock_create" },
	{ 0xe169095f, "tcp_sock_set_user_timeout" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x9674484b, "kset_unregister" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x3be9c133, "configfs_unregister_subsystem" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x9ae47436, "_find_last_bit" },
	{ 0x92997ed8, "_printk" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0x67a4e98b, "fs_kobj" },
	{ 0x8de5a164, "blkdev_put" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x60ea38ad, "submit_bio" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xa6f5d0a6, "bio_put" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2bce892, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x7f776354, "configfs_register_subsystem" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x45c18671, "blkdev_get_by_dev" },
	{ 0xc5e724ff, "configfs_remove_default_groups" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe3d3a01f, "config_group_init_type_name" },
	{ 0xc5a81d59, "kernel_sock_shutdown" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9055cb3a, "iov_iter_kvec" },
	{ 0xf1e046cc, "panic" },
	{ 0xb1eda82f, "bio_add_page" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6726af2d, "__seq_open_private" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdcb764ad, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xda93689e, "configfs_depend_item" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfe4313f1, "__folio_alloc" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xcbad1871, "config_item_init_type_name" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf0b55e33, "config_item_put" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0xef2a3de4, "kobject_set_name" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x281fa3b3, "sock_recvmsg" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xacaa2c9e, "sock_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xec9aa643, "configfs_undepend_item" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xbfc9d9db, "tcp_sock_set_nodelay" },
	{ 0x57bdb657, "seq_release_private" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x34106d8f, "kset_register" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1a3711d8, "sock_create_lite" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xc2766fdd, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1e0a2844, "kernel_sendmsg" },
	{ 0x3ebe7ef1, "bio_alloc_bioset" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x53b954a2, "up_read" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x75f5da71, "fs_bio_set" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa0a1468f, "kset_create_and_add" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AB89D9D5F36BE6D9A80D0CD");
