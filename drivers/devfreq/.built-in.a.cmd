cmd_drivers/devfreq/built-in.a := rm -f drivers/devfreq/built-in.a;  printf "drivers/devfreq/%s " devfreq.o governor_simpleondemand.o | xargs aarch64-linux-gnu-ar cDPrST drivers/devfreq/built-in.a
