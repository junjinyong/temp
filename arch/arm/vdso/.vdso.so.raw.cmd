cmd_arch/arm/vdso/vdso.so.raw := arm-linux-gnueabihf-ld -EL -z noexecstack -Bsymbolic --no-undefined -soname=linux-vdso.so.1 -z max-page-size=4096 -shared  --hash-style=sysv --build-id=sha1 -T  arch/arm/vdso/vdso.lds arch/arm/vdso/vgettimeofday.o arch/arm/vdso/datapage.o arch/arm/vdso/note.o -o arch/arm/vdso/vdso.so.raw; if arm-linux-gnueabihf-objdump -R arch/arm/vdso/vdso.so.raw | grep -E -h "R_ARM_JUMP_SLOT|R_ARM_GLOB_DAT|R_ARM_ABS32"; then (echo >&2 "arch/arm/vdso/vdso.so.raw: dynamic relocations are not supported"; rm -f arch/arm/vdso/vdso.so.raw; /bin/false); fi