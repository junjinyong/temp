cmd_drivers/perf/arm_spe_pmu.mod := printf '%s\n'   arm_spe_pmu.o | awk '!x[$$0]++ { print("drivers/perf/"$$0) }' > drivers/perf/arm_spe_pmu.mod
