cmd_drivers/char/hw_random/rng-core.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/char/hw_random/rng-core.ko drivers/char/hw_random/rng-core.o drivers/char/hw_random/rng-core.mod.o;  true