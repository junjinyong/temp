cmd_drivers/fpga/fpga-bridge.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/fpga/fpga-bridge.ko drivers/fpga/fpga-bridge.o drivers/fpga/fpga-bridge.mod.o;  true