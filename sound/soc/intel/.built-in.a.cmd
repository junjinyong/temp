cmd_sound/soc/intel/built-in.a := rm -f sound/soc/intel/built-in.a;  printf "sound/soc/intel/%s " common/built-in.a boards/built-in.a | xargs aarch64-linux-gnu-ar cDPrST sound/soc/intel/built-in.a
