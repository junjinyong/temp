cmd_drivers/soc/qcom/built-in.a := rm -f drivers/soc/qcom/built-in.a;  printf "drivers/soc/qcom/%s " qcom_aoss.o qcom-geni-se.o cmd-db.o cpr.o rpmh-rsc.o rpmh.o smd-rpm.o smem.o smem_state.o smp2p.o smsm.o rpmhpd.o rpmpd.o kryo-l2-accessors.o | xargs aarch64-linux-gnu-ar cDPrST drivers/soc/qcom/built-in.a