cmd_sound/core/snd-compress.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o sound/core/snd-compress.ko sound/core/snd-compress.o sound/core/snd-compress.mod.o;  true