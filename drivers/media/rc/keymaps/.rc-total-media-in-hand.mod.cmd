cmd_drivers/media/rc/keymaps/rc-total-media-in-hand.mod := printf '%s\n'   rc-total-media-in-hand.o | awk '!x[$$0]++ { print("drivers/media/rc/keymaps/"$$0) }' > drivers/media/rc/keymaps/rc-total-media-in-hand.mod