cmd_drivers/soc/sunxi/built-in.a := rm -f drivers/soc/sunxi/built-in.a;  printf "drivers/soc/sunxi/%s " sunxi_mbus.o sunxi_sram.o | xargs aarch64-linux-gnu-ar cDPrST drivers/soc/sunxi/built-in.a
