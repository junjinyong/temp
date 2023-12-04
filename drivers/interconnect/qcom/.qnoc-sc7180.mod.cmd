cmd_drivers/interconnect/qcom/qnoc-sc7180.mod := printf '%s\n'   sc7180.o | awk '!x[$$0]++ { print("drivers/interconnect/qcom/"$$0) }' > drivers/interconnect/qcom/qnoc-sc7180.mod
