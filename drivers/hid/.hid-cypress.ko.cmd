cmd_drivers/hid/hid-cypress.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/hid/hid-cypress.ko drivers/hid/hid-cypress.o drivers/hid/hid-cypress.mod.o;  true