cmd_crypto/blake2b_generic.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/blake2b_generic.ko crypto/blake2b_generic.o crypto/blake2b_generic.mod.o;  true