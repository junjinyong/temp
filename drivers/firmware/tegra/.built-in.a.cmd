cmd_drivers/firmware/tegra/built-in.a := rm -f drivers/firmware/tegra/built-in.a;  printf "drivers/firmware/tegra/%s " bpmp.o bpmp-tegra210.o bpmp-tegra186.o bpmp-debugfs.o ivc.o | xargs aarch64-linux-gnu-ar cDPrST drivers/firmware/tegra/built-in.a