cmd_drivers/soc/qcom/qcom_stats.mod := printf '%s\n'   qcom_stats.o | awk '!x[$$0]++ { print("drivers/soc/qcom/"$$0) }' > drivers/soc/qcom/qcom_stats.mod
