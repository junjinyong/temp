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

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:BQ258900:*");
MODULE_ALIAS("of:N*T*Cti,bq25890");
MODULE_ALIAS("of:N*T*Cti,bq25890C*");
MODULE_ALIAS("of:N*T*Cti,bq25892");
MODULE_ALIAS("of:N*T*Cti,bq25892C*");
MODULE_ALIAS("of:N*T*Cti,bq25895");
MODULE_ALIAS("of:N*T*Cti,bq25895C*");
MODULE_ALIAS("of:N*T*Cti,bq25896");
MODULE_ALIAS("of:N*T*Cti,bq25896C*");
MODULE_ALIAS("i2c:bq25890");
MODULE_ALIAS("i2c:bq25892");
MODULE_ALIAS("i2c:bq25895");
MODULE_ALIAS("i2c:bq25896");
