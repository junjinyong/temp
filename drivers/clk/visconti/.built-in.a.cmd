cmd_drivers/clk/visconti/built-in.a := rm -f drivers/clk/visconti/built-in.a;  printf "drivers/clk/visconti/%s " clkc.o pll.o reset.o pll-tmpv770x.o clkc-tmpv770x.o | xargs aarch64-linux-gnu-ar cDPrST drivers/clk/visconti/built-in.a