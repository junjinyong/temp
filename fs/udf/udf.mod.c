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
	{ 0xbbbc882c, "bh_uptodate_or_lock" },
	{ 0x5e64c29b, "inode_init_owner" },
	{ 0x8a21d131, "filemap_fdatawrite" },
	{ 0x460108d1, "generic_fillattr" },
	{ 0x506c0be9, "vfs_fsync_range" },
	{ 0x8eb4a783, "setattr_prepare" },
	{ 0xf812cff6, "memscan" },
	{ 0xd46f3750, "iget_locked" },
	{ 0x298319d0, "clear_nlink" },
	{ 0x1804edf1, "generic_block_bmap" },
	{ 0x691ec44b, "flush_dcache_page" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x80765dd0, "d_instantiate" },
	{ 0x874f3fd2, "clear_inode" },
	{ 0xbcff1231, "grab_cache_page_write_begin" },
	{ 0x8d73278e, "hex_asc_upper" },
	{ 0x35249f87, "discard_new_inode" },
	{ 0x676832ff, "folio_unlock" },
	{ 0xeb9eef52, "match_uint" },
	{ 0xf1b0a24a, "generic_file_splice_read" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe9668d19, "new_inode" },
	{ 0x70554125, "init_special_inode" },
	{ 0x49758fc7, "unregister_filesystem" },
	{ 0x2875a315, "utf32_to_utf8" },
	{ 0x5527703b, "mark_buffer_dirty" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x8b618d08, "overflowuid" },
	{ 0xcb7a4ebf, "__blockdev_direct_IO" },
	{ 0x84dd752b, "d_make_root" },
	{ 0x2e7398b6, "sb_set_blocksize" },
	{ 0xc7669c1a, "block_truncate_page" },
	{ 0x7b12cb7a, "sync_filesystem" },
	{ 0xf3ae5355, "d_splice_alias" },
	{ 0x809a8e2e, "current_time" },
	{ 0x4829a47e, "memcpy" },
	{ 0xae69e4b2, "ihold" },
	{ 0xd7402c3c, "page_get_link" },
	{ 0x37a0cba, "kfree" },
	{ 0x5817c224, "generic_file_fsync" },
	{ 0x235907b1, "read_cache_page" },
	{ 0x3215cfc7, "finish_open" },
	{ 0x4a4864ce, "iput" },
	{ 0xbb0324ff, "iter_file_splice_write" },
	{ 0xb8413079, "register_filesystem" },
	{ 0x8378aa1d, "d_tmpfile" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7c158924, "kill_block_super" },
	{ 0x5e2489d1, "unlock_new_inode" },
	{ 0x92997ed8, "_printk" },
	{ 0x9056e7c4, "block_invalidate_folio" },
	{ 0x1436dbd7, "generic_write_end" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcc7003da, "load_nls" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x893abd4a, "make_kuid" },
	{ 0xe53353ec, "truncate_inode_pages_final" },
	{ 0x3c2e177f, "inode_sub_bytes" },
	{ 0x69cceb6b, "block_write_full_page" },
	{ 0x8470a730, "generic_file_mmap" },
	{ 0x7171121c, "overflowgid" },
	{ 0x779eb59, "invalidate_inode_buffers" },
	{ 0xc6cbbc89, "capable" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x95b23208, "inode_init_once" },
	{ 0x9a91816, "cdrom_get_last_written" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xf60c01cf, "__brelse" },
	{ 0xd210c9ee, "inode_nohighmem" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x8fd557d3, "generic_file_read_iter" },
	{ 0x59d66f69, "inode_maybe_inc_iversion" },
	{ 0x58d074b3, "unlock_page" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x4e3567f7, "match_int" },
	{ 0x6bf68500, "truncate_pagecache" },
	{ 0xa31d807f, "sync_dirty_buffer" },
	{ 0xd67f2eb5, "insert_inode_locked" },
	{ 0x2a6c5bdb, "__bh_read_batch" },
	{ 0xa5af53e4, "setattr_copy" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x104c66e6, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x5a921311, "strncmp" },
	{ 0x253d3ad8, "from_kgid" },
	{ 0x8b8e8ddd, "__bh_read" },
	{ 0x9166fada, "strncpy" },
	{ 0x991ba268, "cdrom_multisession" },
	{ 0xf5973e63, "mpage_writepages" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdc45dc30, "d_obtain_alias" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9f4a4502, "__bread_gfp" },
	{ 0x6d9a0d5, "block_dirty_folio" },
	{ 0x2909dae5, "inode_add_bytes" },
	{ 0xbadd791e, "mpage_read_folio" },
	{ 0xca85377c, "from_kuid" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6300f56, "make_kgid" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x5b3f61c, "truncate_setsize" },
	{ 0x2401f611, "set_page_dirty" },
	{ 0xea039f0b, "unlock_buffer" },
	{ 0xf16b87ec, "__getblk_gfp" },
	{ 0x81f93b69, "generic_read_dir" },
	{ 0x400327f2, "d_instantiate_new" },
	{ 0x85df9b6c, "strsep" },
	{ 0xcd6be655, "mount_bdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb43f8cbf, "mpage_readahead" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0xac120953, "inc_nlink" },
	{ 0x44e9a829, "match_token" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x5c658476, "__lock_buffer" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x87834179, "generic_file_open" },
	{ 0x98cb4615, "__folio_lock" },
	{ 0xdc4b4ecb, "pagecache_get_page" },
	{ 0x4dc1982a, "is_bad_inode" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x26ca0bba, "block_write_begin" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x815b5dd4, "match_octal" },
	{ 0xafc08054, "dotdot_name" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb02516fb, "__generic_file_write_iter" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0xb9733938, "generic_write_checks" },
	{ 0xbfe97030, "inode_permission" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x52d61781, "kmem_cache_alloc_lru" },
	{ 0xeaa9de01, "__mark_inode_dirty" },
	{ 0xc2766fdd, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1cdaec77, "make_bad_inode" },
	{ 0xc98e70a4, "unload_nls" },
	{ 0x53b954a2, "up_read" },
	{ 0xc2bb910c, "mark_buffer_dirty_inode" },
	{ 0x8fc1340, "drop_nlink" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xee7d63ba, "iget_failed" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "8A61348CFC7783E79F7290F");