cmd_drivers/thermal/samsung/built-in.a := rm -f drivers/thermal/samsung/built-in.a;  printf "drivers/thermal/samsung/%s " exynos_tmu.o | xargs aarch64-linux-gnu-ar cDPrST drivers/thermal/samsung/built-in.a