cmd_crypto/curve25519-generic.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/curve25519-generic.ko crypto/curve25519-generic.o crypto/curve25519-generic.mod.o;  true