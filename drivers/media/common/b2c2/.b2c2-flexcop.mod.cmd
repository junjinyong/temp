cmd_drivers/media/common/b2c2/b2c2-flexcop.mod := printf '%s\n'   flexcop.o flexcop-fe-tuner.o flexcop-i2c.o flexcop-sram.o flexcop-eeprom.o flexcop-misc.o flexcop-hw-filter.o | awk '!x[$$0]++ { print("drivers/media/common/b2c2/"$$0) }' > drivers/media/common/b2c2/b2c2-flexcop.mod