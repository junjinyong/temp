cmd_drivers/base/firmware_loader/built-in.a := rm -f drivers/base/firmware_loader/built-in.a;  printf "drivers/base/firmware_loader/%s " fallback_table.o main.o fallback.o sysfs.o builtin/built-in.a | xargs aarch64-linux-gnu-ar cDPrST drivers/base/firmware_loader/built-in.a