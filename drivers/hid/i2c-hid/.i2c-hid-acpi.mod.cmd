cmd_drivers/hid/i2c-hid/i2c-hid-acpi.mod := printf '%s\n'   i2c-hid-acpi.o | awk '!x[$$0]++ { print("drivers/hid/i2c-hid/"$$0) }' > drivers/hid/i2c-hid/i2c-hid-acpi.mod
