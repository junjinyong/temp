cmd_drivers/misc/built-in.a := rm -f drivers/misc/built-in.a;  printf "drivers/misc/%s " eeprom/built-in.a cb710/built-in.a ti-st/built-in.a lis3lv02d/built-in.a sram.o cardreader/built-in.a | xargs aarch64-linux-gnu-ar cDPrST drivers/misc/built-in.a