cmd_drivers/memory/tegra/built-in.a := rm -f drivers/memory/tegra/built-in.a;  printf "drivers/memory/tegra/%s " mc.o tegra124.o tegra210.o tegra186.o tegra194.o tegra234.o tegra186-emc.o | xargs aarch64-linux-gnu-ar cDPrST drivers/memory/tegra/built-in.a