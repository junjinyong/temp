cmd_drivers/nvme/host/nvme.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/nvme/host/nvme.ko drivers/nvme/host/nvme.o drivers/nvme/host/nvme.mod.o;  true