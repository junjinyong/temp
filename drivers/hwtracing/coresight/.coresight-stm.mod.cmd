cmd_drivers/hwtracing/coresight/coresight-stm.mod := printf '%s\n'   coresight-stm.o | awk '!x[$$0]++ { print("drivers/hwtracing/coresight/"$$0) }' > drivers/hwtracing/coresight/coresight-stm.mod
