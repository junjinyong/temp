cmd_drivers/soc/fsl/dpio/built-in.a := rm -f drivers/soc/fsl/dpio/built-in.a;  printf "drivers/soc/fsl/dpio/%s " dpio.o qbman-portal.o dpio-service.o dpio-driver.o | xargs aarch64-linux-gnu-ar cDPrST drivers/soc/fsl/dpio/built-in.a