cmd_arch/arm64/crypto/aes-ce-cipher.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o arch/arm64/crypto/aes-ce-cipher.ko arch/arm64/crypto/aes-ce-cipher.o arch/arm64/crypto/aes-ce-cipher.mod.o;  true