cmd_drivers/mtd/chips/built-in.a := rm -f drivers/mtd/chips/built-in.a;  printf "drivers/mtd/chips/%s " chipreg.o cfi_probe.o cfi_util.o cfi_cmdset_0020.o cfi_cmdset_0002.o cfi_cmdset_0001.o gen_probe.o | xargs aarch64-linux-gnu-ar cDPrST drivers/mtd/chips/built-in.a