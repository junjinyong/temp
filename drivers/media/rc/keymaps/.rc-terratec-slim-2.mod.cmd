cmd_drivers/media/rc/keymaps/rc-terratec-slim-2.mod := printf '%s\n'   rc-terratec-slim-2.o | awk '!x[$$0]++ { print("drivers/media/rc/keymaps/"$$0) }' > drivers/media/rc/keymaps/rc-terratec-slim-2.mod