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
	{ 0x912f220f, "drmm_encoder_init" },
	{ 0x558f4d16, "cec_delete_adapter" },
	{ 0x7e3277f8, "___drm_dbg" },
	{ 0x1234fc25, "drm_atomic_helper_plane_destroy_state" },
	{ 0x38baa1bc, "gpiod_get_value_cansleep" },
	{ 0x9f1b1ccb, "drm_open" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xdedfc583, "drm_gem_dma_get_sg_table" },
	{ 0xa0c4cf2b, "rpi_firmware_clk_get_max_rate" },
	{ 0xe0c3a5e7, "drm_gem_dma_mmap" },
	{ 0x3d02cd70, "dma_fence_signal_locked" },
	{ 0x63713aaf, "devm_platform_ioremap_resource" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x770d1ae6, "drm_poll" },
	{ 0x12b5728e, "ww_mutex_lock_interruptible" },
	{ 0xed9844f6, "drm_scdc_set_scrambling" },
	{ 0x615eee35, "drm_dev_enter" },
	{ 0x741ad7ae, "mipi_dsi_host_register" },
	{ 0xd2581d9a, "drm_mode_crtc_set_gamma_size" },
	{ 0x512100a3, "drm_connector_attach_max_bpc_property" },
	{ 0x78f1ef1a, "drm_bridge_add" },
	{ 0x7d2a40e8, "drm_atomic_helper_commit_modeset_enables" },
	{ 0x3f26f22e, "bpf_trace_run4" },
	{ 0x6b3e7cdd, "drm_syncobj_find" },
	{ 0x3b72b22a, "drm_atomic_helper_connector_tv_reset" },
	{ 0x20978fb9, "idr_find" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x1190bf7a, "dma_resv_reserve_fences" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x3f667784, "devm_rpi_firmware_get" },
	{ 0x44fd073b, "devm_pm_runtime_enable" },
	{ 0xd5cb06d9, "drm_kms_helper_poll_init" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xce588db, "drm_atomic_get_private_obj_state" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0xf7208367, "of_property_match_string" },
	{ 0xba852468, "drm_syncobj_find_fence" },
	{ 0x2d4c773a, "hdmi_spd_infoframe_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xb0a0da0c, "rational_best_approximation" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xebc58dfd, "component_master_add_with_match" },
	{ 0x76aa5977, "drm_mode_probed_add" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0xacaa4c72, "dma_fence_match_context" },
	{ 0x444b0dd8, "drm_connector_helper_hpd_irq_event" },
	{ 0x51a895b5, "drm_atomic_helper_disable_plane" },
	{ 0x3c919a3d, "drm_gem_prime_mmap" },
	{ 0xd47ccf38, "pm_runtime_set_autosuspend_delay" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0x1eec4723, "drm_atomic_helper_shutdown" },
	{ 0x40064408, "drm_atomic_private_obj_init" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x676180f9, "drm_atomic_helper_cleanup_planes" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x23daa989, "mipi_dsi_create_packet" },
	{ 0x5025cef4, "drm_connector_atomic_hdr_metadata_equal" },
	{ 0x7bccd8df, "cec_s_phys_addr" },
	{ 0x21e6b37b, "devm_ioremap" },
	{ 0xf0d2cec0, "ww_mutex_unlock" },
	{ 0x775ca19, "drm_mode_create_hdmi_colorspace_property" },
	{ 0x9e09db0c, "component_compare_dev" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xd4e22b6d, "cec_s_conn_info" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0x801e4086, "drm_mode_object_get" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4c6f9cd9, "component_del" },
	{ 0x7ea712b8, "unmap_mapping_range" },
	{ 0x53481983, "dma_resv_add_fence" },
	{ 0x91a71650, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x1baab09a, "drm_modeset_lock_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xe08138c3, "drm_gem_dma_dumb_create_internal" },
	{ 0xfcfa56d5, "drm_atomic_helper_crtc_destroy_state" },
	{ 0x394327c1, "drm_writeback_queue_job" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0x1a89f9ff, "cec_s_phys_addr_from_edid" },
	{ 0x48f383c2, "dma_release_channel" },
	{ 0x5601a8a9, "drm_atomic_helper_commit_planes" },
	{ 0xc4ea9fd7, "drm_crtc_cleanup" },
	{ 0x25d5a8a1, "drm_writeback_signal_completion" },
	{ 0xe80481de, "drm_aperture_remove_conflicting_framebuffers" },
	{ 0xf41a0a2, "devm_clk_hw_register" },
	{ 0xfc3dc05b, "drm_connector_list_iter_begin" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xede242fc, "drm_encoder_cleanup" },
	{ 0x57f5eec1, "drm_connector_unregister" },
	{ 0xe2964344, "__wake_up" },
	{ 0x8e21c9a1, "dma_fence_add_callback" },
	{ 0xfeb953b1, "__drm_printfn_seq_file" },
	{ 0x9b93785a, "drm_fb_dma_get_gem_obj" },
	{ 0xf973d666, "platform_get_resource_byname" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xadda69dd, "rpi_firmware_get" },
	{ 0x605deb95, "drm_gem_prime_handle_to_fd" },
	{ 0xea07978c, "drmm_mode_config_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x38690d99, "drm_detect_hdmi_monitor" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x34c6142e, "drm_scdc_read" },
	{ 0xfffa4690, "drm_firmware_drivers_only" },
	{ 0x8cf4d943, "drm_plane_create_zpos_property" },
	{ 0xe56600f7, "drm_atomic_helper_bridge_reset" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0xe885391e, "drm_add_modes_noedid" },
	{ 0xfd96c75e, "drm_bridge_remove" },
	{ 0xee2b4800, "drm_mode_object_put" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x58750407, "drm_gem_handle_delete" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x58c9f362, "of_find_compatible_node" },
	{ 0x8d048958, "drm_crtc_vblank_get" },
	{ 0x36e7a85a, "drm_gem_object_lookup" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x89c154bb, "drm_crtc_send_vblank_event" },
	{ 0xd13bcc7f, "drm_connector_attach_encoder" },
	{ 0xb13bde1d, "drm_atomic_helper_commit_modeset_disables" },
	{ 0x85fd4c24, "drm_atomic_get_new_connector_for_encoder" },
	{ 0x2ed3c600, "drm_mode_debug_printmodeline" },
	{ 0x48adc54d, "__platform_register_drivers" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x92997ed8, "_printk" },
	{ 0x17b68a70, "drm_hdmi_avi_infoframe_colorimetry" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb1b87f8b, "__drmm_add_action_or_reset" },
	{ 0xd6172630, "platform_get_irq_byname" },
	{ 0x7f79f04d, "__drm_atomic_helper_private_obj_duplicate_state" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x465a57a0, "drm_atomic_helper_commit" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x6d9bb1c7, "drm_atomic_helper_check" },
	{ 0xa67a79b8, "__drmm_mutex_release" },
	{ 0x4d327b16, "drm_atomic_private_obj_fini" },
	{ 0x4e9be7db, "__drm_atomic_helper_plane_destroy_state" },
	{ 0xfd491fba, "drm_atomic_helper_connector_destroy_state" },
	{ 0xf2105b38, "drm_connector_list_iter_end" },
	{ 0x45cb22c6, "drm_syncobj_replace_fence" },
	{ 0xdfbd0314, "drm_gem_mmap" },
	{ 0x98a8d3, "drm_property_create_enum" },
	{ 0xb030487b, "dma_resv_get_singleton" },
	{ 0x6ad1dbf8, "drm_ioctl" },
	{ 0xf68b7619, "drm_plane_cleanup" },
	{ 0x343a7354, "drm_connector_attach_tv_margin_properties" },
	{ 0x3d14056, "drm_dev_printk" },
	{ 0xd903f981, "devm_add_action" },
	{ 0xe4c592bf, "drm_gem_prime_fd_to_handle" },
	{ 0x8713ed03, "drm_atomic_get_crtc_state" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xdf666902, "drm_rotation_simplify" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xd35eac5f, "drm_modeset_lock" },
	{ 0x4fe840d6, "drm_gem_vm_close" },
	{ 0x4872931c, "drm_gem_vm_open" },
	{ 0xd08fc3b7, "drm_dev_unplug" },
	{ 0x209009ac, "of_match_device" },
	{ 0xd1ae25e5, "drm_connector_init" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0xb0c523a, "drm_atomic_helper_fake_vblank" },
	{ 0xe8d25f2c, "drm_debugfs_create_files" },
	{ 0x8940d1b7, "__drmm_universal_plane_alloc" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x41482d8b, "strndup_user" },
	{ 0xe4628fcc, "drmm_crtc_init_with_planes" },
	{ 0xb7c0f443, "sort" },
	{ 0x49e3a4b, "debugfs_create_bool" },
	{ 0xf5e4a624, "drm_atomic_set_fb_for_plane" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x984cc982, "of_clk_hw_onecell_get" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xdf8d59ba, "of_clk_add_hw_provider" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xee7df750, "dma_request_chan_by_mask" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0x255bf261, "__drm_atomic_helper_connector_reset" },
	{ 0xe907aeae, "drm_add_edid_modes" },
	{ 0xbc45c15c, "__drm_atomic_helper_connector_destroy_state" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x63e9296, "rpi_firmware_put" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x9843f4f0, "drm_read" },
	{ 0x23912872, "platform_get_resource" },
	{ 0xb5902108, "bpf_trace_run5" },
	{ 0x55e09df4, "cec_transmit_done_ts" },
	{ 0x77117430, "drm_connector_attach_colorspace_property" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0xb726e1b8, "drm_hdmi_infoframe_set_hdr_metadata" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0x9166fada, "strncpy" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x2818ba27, "drm_crtc_commit_wait" },
	{ 0x553a9d2c, "drm_writeback_connector_init_with_encoder" },
	{ 0x6d1eb41, "dma_sync_wait" },
	{ 0xffb7c514, "ida_free" },
	{ 0x1bf56136, "drm_crtc_vblank_on" },
	{ 0xc4273b34, "drm_atomic_get_new_private_obj_state" },
	{ 0xd3379b7a, "rpi_firmware_find_node" },
	{ 0xe60b61da, "snd_dmaengine_pcm_prepare_slave_config" },
	{ 0x250f80ed, "drm_gem_handle_create" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xe9954ad9, "drm_gem_fb_create" },
	{ 0x73306bfb, "drm_atomic_helper_check_plane_state" },
	{ 0xdc45c9fc, "drmm_connector_init" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0xf4bb29e6, "drm_crtc_init_with_planes" },
	{ 0xd7889a07, "cec_unregister_adapter" },
	{ 0x575e686e, "drm_mode_create_tv_properties" },
	{ 0xd0b9b98d, "drm_mode_duplicate" },
	{ 0xd85a67a, "drm_object_attach_property" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3d0fa060, "of_device_is_available" },
	{ 0x799d9d85, "drm_crtc_vblank_put" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0x45567923, "drm_atomic_get_old_private_obj_state" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x83a81aa8, "__drm_atomic_helper_plane_reset" },
	{ 0x9ef7759c, "__drm_dev_dbg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xeee4a6fa, "drm_atomic_commit" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0x4ac5ff1d, "__devm_drm_dev_alloc" },
	{ 0x1c3c1cd1, "drm_atomic_state_alloc" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x6214ef5e, "drmm_kmalloc" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0x5a08fb41, "drm_print_regset32" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0xc43d74f5, "drm_connector_update_edid_property" },
	{ 0x5fcdcc5e, "drm_plane_create_alpha_property" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0xcb3a4216, "drm_atomic_helper_set_config" },
	{ 0x3e052081, "drm_gem_dma_create" },
	{ 0x770a4697, "drm_fbdev_generic_setup" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb0a07d96, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0x513072fe, "__drm_puts_seq_file" },
	{ 0x85baa052, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xae277372, "__drm_crtc_commit_free" },
	{ 0x2efaceff, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0x2be0d346, "drm_do_get_edid" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x58c16896, "drm_gem_dma_vmap" },
	{ 0x6626ed76, "drm_connector_cleanup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x908ea4d6, "cec_allocate_adapter" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0x23f09b8c, "drm_universal_plane_init" },
	{ 0x7261cab4, "__devm_reset_control_get" },
	{ 0x7de4bde7, "bpf_trace_run3" },
	{ 0x23fbe666, "drm_scdc_set_high_tmds_clock_ratio" },
	{ 0xde7d5e35, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3bb325a7, "drm_crtc_enable_color_mgmt" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0xd01368ba, "__drm_atomic_helper_connector_duplicate_state" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xf4bf8615, "drm_hdmi_avi_infoframe_bars" },
	{ 0xcbaa3e9f, "drm_connector_list_iter_next" },
	{ 0xab7f6000, "drm_encoder_init" },
	{ 0x5561da8a, "platform_device_register_full" },
	{ 0x126b4919, "component_master_del" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0x7d3f5fa7, "drm_vblank_init" },
	{ 0x28779e52, "drm_printf" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x7a6ffa02, "of_device_is_compatible" },
	{ 0x5b612b07, "drm_atomic_helper_bridge_destroy_state" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0xa06ddfa6, "component_match_add_release" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xaadcfaac, "drm_gem_dma_free" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x47c20f8a, "refcount_dec_not_one" },
	{ 0x628985e5, "platform_find_device_by_driver" },
	{ 0x595d8002, "hdmi_infoframe_pack" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe79b6111, "component_bind_all" },
	{ 0xca4a8a39, "__of_get_address" },
	{ 0xdc66340f, "drm_crtc_vblank_helper_get_vblank_timestamp" },
	{ 0xe8d99ef9, "drm_atomic_helper_wait_for_flip_done" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd316d017, "drm_crtc_vblank_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2fbd2d2f, "mipi_dsi_host_unregister" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x8740af9, "drm_helper_probe_single_connector_modes" },
	{ 0x6a1df4f7, "drm_plane_create_rotation_property" },
	{ 0xb2a7e94, "__drm_atomic_helper_crtc_reset" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x65702bd6, "drm_default_rgb_quant_range" },
	{ 0xcce1f06e, "drm_modeset_backoff" },
	{ 0x2c82aa02, "drm_crtc_handle_vblank" },
	{ 0x3dab0487, "drm_hdmi_avi_infoframe_quant_range" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x61281c8a, "drm_mode_create_tv_margin_properties" },
	{ 0xe317082a, "__drm_printfn_info" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x25379e73, "clk_set_min_rate" },
	{ 0x9b285573, "drm_match_cea_mode" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x2cc495c5, "rpi_firmware_property_list" },
	{ 0xfc50145d, "drm_mode_destroy" },
	{ 0xc5c926dd, "drm_bridge_attach" },
	{ 0x8cc18dfc, "devm_snd_dmaengine_pcm_register" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xc3e1ba16, "drm_atomic_helper_page_flip" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0xbd217e6c, "cec_fill_conn_info_from_drm" },
	{ 0x5ba54de7, "drm_atomic_helper_commit_hw_done" },
	{ 0x5baf4462, "drm_atomic_helper_connector_reset" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x4ebf3a06, "drm_mode_config_reset" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x516e54fc, "drm_plane_create_blend_mode_property" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0x68092d33, "drmm_of_get_bridge" },
	{ 0x268d6039, "cec_received_msg_ts" },
	{ 0xb4ffb399, "component_add" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x72374a9d, "clk_fixed_factor_ops" },
	{ 0xa83564c7, "drm_plane_create_chroma_siting_properties" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xcc328a5c, "reservation_ww_class" },
	{ 0xe44c1728, "__pm_runtime_use_autosuspend" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xadbeed61, "mipi_dsi_packet_format_is_long" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc667e36e, "drm_atomic_helper_bridge_duplicate_state" },
	{ 0xc6fe41d8, "component_unbind_all" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd2020e0d, "of_dma_configure_id" },
	{ 0x7f860eee, "drm_scdc_get_scrambling_status" },
	{ 0xe2e1378e, "drm_connector_attach_hdr_output_metadata_property" },
	{ 0xfcfd5eb4, "drm_atomic_helper_update_plane" },
	{ 0x24f62e8f, "drm_get_edid" },
	{ 0xb647b065, "of_find_i2c_adapter_by_node" },
	{ 0x7ce1c59f, "of_find_matching_node_and_match" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x33da9135, "platform_unregister_drivers" },
	{ 0x775ac972, "drm_compat_ioctl" },
	{ 0x51ed317e, "devm_snd_soc_register_card" },
	{ 0x926a1184, "drm_dev_register" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xacffcd3d, "drm_plane_create_zpos_immutable_property" },
	{ 0x554e3a87, "drm_gem_plane_helper_prepare_fb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x45cbe173, "drm_atomic_get_connector_state" },
	{ 0x9eac123a, "drm_plane_create_color_properties" },
	{ 0x900eb2e2, "drm_release" },
	{ 0xf652c7e4, "drm_gem_dma_prime_import_sg_table" },
	{ 0x3156b338, "drm_gem_prime_export" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x4967e77b, "cec_register_adapter" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm,cec,drm_kms_helper,drm_dma_helper,drm_display_helper,snd-soc-core");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-vc5");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-vc5C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2712-vc6");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2712-vc6C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-vc4");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-vc4C*");
MODULE_ALIAS("of:N*T*Cbrcm,cygnus-vc4");
MODULE_ALIAS("of:N*T*Cbrcm,cygnus-vc4C*");

MODULE_INFO(srcversion, "6C21619B08F2FFFCA6D368B");