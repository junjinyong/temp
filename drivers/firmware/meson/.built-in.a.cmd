cmd_drivers/firmware/meson/built-in.a := rm -f drivers/firmware/meson/built-in.a;  printf "drivers/firmware/meson/%s " meson_sm.o | xargs aarch64-linux-gnu-ar cDPrST drivers/firmware/meson/built-in.a
