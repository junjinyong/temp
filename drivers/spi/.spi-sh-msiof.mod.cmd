cmd_drivers/spi/spi-sh-msiof.mod := printf '%s\n'   spi-sh-msiof.o | awk '!x[$$0]++ { print("drivers/spi/"$$0) }' > drivers/spi/spi-sh-msiof.mod
