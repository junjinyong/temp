cmd_drivers/devfreq/governor_userspace.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/devfreq/governor_userspace.ko drivers/devfreq/governor_userspace.o drivers/devfreq/governor_userspace.mod.o;  true