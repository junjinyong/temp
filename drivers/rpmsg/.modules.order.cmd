cmd_drivers/rpmsg/modules.order := {   echo drivers/rpmsg/rpmsg_char.ko;   echo drivers/rpmsg/rpmsg_ctrl.ko;   echo drivers/rpmsg/qcom_glink_smem.ko; :; } > drivers/rpmsg/modules.order
