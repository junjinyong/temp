cmd_drivers/tty/serial/built-in.a := rm -f drivers/tty/serial/built-in.a;  printf "drivers/tty/serial/%s " serial_core.o earlycon.o 8250/built-in.a amba-pl011.o serial_mctrl_gpio.o kgdboc.o | xargs aarch64-linux-gnu-ar cDPrST drivers/tty/serial/built-in.a