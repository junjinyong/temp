cmd_drivers/cpufreq/modules.order := {   echo drivers/cpufreq/cpufreq_powersave.ko;   echo drivers/cpufreq/cpufreq_conservative.ko;   echo drivers/cpufreq/cppc_cpufreq.ko;   echo drivers/cpufreq/imx-cpufreq-dt.ko;   echo drivers/cpufreq/mediatek-cpufreq-hw.ko;   echo drivers/cpufreq/raspberrypi-cpufreq.ko;   echo drivers/cpufreq/sun50i-cpufreq-nvmem.ko; :; } > drivers/cpufreq/modules.order