cmd_drivers/ufs/core/built-in.a := rm -f drivers/ufs/core/built-in.a;  printf "drivers/ufs/core/%s " ufshcd.o ufs-sysfs.o ufs-debugfs.o | xargs aarch64-linux-gnu-ar cDPrST drivers/ufs/core/built-in.a
