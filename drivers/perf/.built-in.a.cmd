cmd_drivers/perf/built-in.a := rm -f drivers/perf/built-in.a;  printf "drivers/perf/%s " arm_pmu.o arm_pmu_platform.o arm_pmu_acpi.o hisilicon/built-in.a qcom_l2_pmu.o qcom_l3_pmu.o | xargs aarch64-linux-gnu-ar cDPrST drivers/perf/built-in.a