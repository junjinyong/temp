cmd_drivers/gpu/drm/arm/modules.order := {   echo drivers/gpu/drm/arm/hdlcd.ko;   echo drivers/gpu/drm/arm/mali-dp.ko;   cat drivers/gpu/drm/arm/display/modules.order; :; } > drivers/gpu/drm/arm/modules.order