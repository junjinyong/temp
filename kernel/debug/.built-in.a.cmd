cmd_kernel/debug/built-in.a := rm -f kernel/debug/built-in.a;  printf "kernel/debug/%s " debug_core.o gdbstub.o kdb/built-in.a | xargs aarch64-linux-gnu-ar cDPrST kernel/debug/built-in.a
