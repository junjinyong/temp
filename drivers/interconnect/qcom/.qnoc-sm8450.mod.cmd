cmd_drivers/interconnect/qcom/qnoc-sm8450.mod := printf '%s\n'   sm8450.o | awk '!x[$$0]++ { print("drivers/interconnect/qcom/"$$0) }' > drivers/interconnect/qcom/qnoc-sm8450.mod
