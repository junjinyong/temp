cmd_drivers/gpu/drm/drm.mod := printf '%s\n'   drm_aperture.o drm_auth.o drm_cache.o drm_file.o drm_gem.o drm_ioctl.o drm_drv.o drm_sysfs.o drm_mm.o drm_crtc.o drm_fourcc.o drm_modes.o drm_edid.o drm_displayid.o drm_trace_points.o drm_prime.o drm_vma_manager.o drm_modeset_lock.o drm_atomic.o drm_bridge.o drm_framebuffer.o drm_connector.o drm_blend.o drm_encoder.o drm_mode_object.o drm_property.o drm_plane.o drm_color_mgmt.o drm_print.o drm_dumb_buffers.o drm_mode_config.o drm_vblank.o drm_syncobj.o drm_lease.o drm_writeback.o drm_client.o drm_client_modeset.o drm_atomic_uapi.o drm_managed.o drm_vblank_work.o drm_agpsupport.o drm_bufs.o drm_context.o drm_dma.o drm_hashtab.o drm_irq.o drm_legacy_misc.o drm_lock.o drm_memory.o drm_scatter.o drm_vm.o drm_ioc32.o drm_panel.o drm_of.o drm_pci.o drm_debugfs.o drm_debugfs_crc.o | awk '!x[$$0]++ { print("drivers/gpu/drm/"$$0) }' > drivers/gpu/drm/drm.mod