cmd_drivers/hwtracing/coresight/coresight-tmc.mod := printf '%s\n'   coresight-tmc-core.o coresight-tmc-etf.o coresight-tmc-etr.o | awk '!x[$$0]++ { print("drivers/hwtracing/coresight/"$$0) }' > drivers/hwtracing/coresight/coresight-tmc.mod