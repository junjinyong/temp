cmd_drivers/char/ipmi/built-in.a := rm -f drivers/char/ipmi/built-in.a;  printf "drivers/char/ipmi/%s " ipmi_dmi.o ipmi_plat_data.o | xargs aarch64-linux-gnu-ar cDPrST drivers/char/ipmi/built-in.a
