cmd_drivers/tee/built-in.a := rm -f drivers/tee/built-in.a;  printf "drivers/tee/%s " tee_core.o tee_shm.o tee_shm_pool.o optee/built-in.a | xargs aarch64-linux-gnu-ar cDPrST drivers/tee/built-in.a
