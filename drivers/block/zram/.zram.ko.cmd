cmd_drivers/block/zram/zram.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/block/zram/zram.ko drivers/block/zram/zram.o drivers/block/zram/zram.mod.o;  true