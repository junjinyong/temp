cmd_crypto/dh_generic.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/dh_generic.ko crypto/dh_generic.o crypto/dh_generic.mod.o;  true
