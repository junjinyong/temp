cmd_drivers/hwtracing/coresight/coresight-catu.mod := printf '%s\n'   coresight-catu.o | awk '!x[$$0]++ { print("drivers/hwtracing/coresight/"$$0) }' > drivers/hwtracing/coresight/coresight-catu.mod
