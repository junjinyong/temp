cmd_drivers/leds/trigger/built-in.a := rm -f drivers/leds/trigger/built-in.a;  printf "drivers/leds/trigger/%s " ledtrig-timer.o ledtrig-oneshot.o ledtrig-heartbeat.o ledtrig-backlight.o ledtrig-gpio.o ledtrig-cpu.o ledtrig-default-on.o ledtrig-input.o ledtrig-panic.o ledtrig-actpwr.o | xargs aarch64-linux-gnu-ar cDPrST drivers/leds/trigger/built-in.a