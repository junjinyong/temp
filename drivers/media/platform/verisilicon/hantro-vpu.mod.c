#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,mc,v4l2-h264,videobuf2-dma-contig,v4l2-vp9,videobuf2-common");

MODULE_ALIAS("of:N*T*Crockchip,px30-vpu");
MODULE_ALIAS("of:N*T*Crockchip,px30-vpuC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3036-vpu");
MODULE_ALIAS("of:N*T*Crockchip,rk3036-vpuC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-vpu");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-vpuC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-vpu");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-vpuC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3328-vpu");
MODULE_ALIAS("of:N*T*Crockchip,rk3328-vpuC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-vpu");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-vpuC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-vepu");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-vepuC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-vpu");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-vpuC*");
MODULE_ALIAS("of:N*T*Cnxp,imx8mm-vpu-g1");
MODULE_ALIAS("of:N*T*Cnxp,imx8mm-vpu-g1C*");
MODULE_ALIAS("of:N*T*Cnxp,imx8mq-vpu");
MODULE_ALIAS("of:N*T*Cnxp,imx8mq-vpuC*");
MODULE_ALIAS("of:N*T*Cnxp,imx8mq-vpu-g1");
MODULE_ALIAS("of:N*T*Cnxp,imx8mq-vpu-g1C*");
MODULE_ALIAS("of:N*T*Cnxp,imx8mq-vpu-g2");
MODULE_ALIAS("of:N*T*Cnxp,imx8mq-vpu-g2C*");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h6-vpu-g2");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h6-vpu-g2C*");
