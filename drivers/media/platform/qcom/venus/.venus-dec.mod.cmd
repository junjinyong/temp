cmd_drivers/media/platform/qcom/venus/venus-dec.mod := printf '%s\n'   vdec.o vdec_ctrls.o | awk '!x[$$0]++ { print("drivers/media/platform/qcom/venus/"$$0) }' > drivers/media/platform/qcom/venus/venus-dec.mod