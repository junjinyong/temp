cmd_drivers/firmware/stratix10-rsu.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/firmware/stratix10-rsu.ko drivers/firmware/stratix10-rsu.o drivers/firmware/stratix10-rsu.mod.o;  true