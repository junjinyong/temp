cmd_drivers/gpu/drm/panel/panel-truly-nt35597.mod := printf '%s\n'   panel-truly-nt35597.o | awk '!x[$$0]++ { print("drivers/gpu/drm/panel/"$$0) }' > drivers/gpu/drm/panel/panel-truly-nt35597.mod
