cmd_drivers/hwtracing/coresight/coresight-tpiu.mod := printf '%s\n'   coresight-tpiu.o | awk '!x[$$0]++ { print("drivers/hwtracing/coresight/"$$0) }' > drivers/hwtracing/coresight/coresight-tpiu.mod
