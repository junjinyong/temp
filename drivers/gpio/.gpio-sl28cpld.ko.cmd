cmd_drivers/gpio/gpio-sl28cpld.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/gpio/gpio-sl28cpld.ko drivers/gpio/gpio-sl28cpld.o drivers/gpio/gpio-sl28cpld.mod.o;  true