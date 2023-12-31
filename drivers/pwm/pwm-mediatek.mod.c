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

MODULE_ALIAS("of:N*T*Cmediatek,mt2712-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6795-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6795-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7623-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt7623-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7628-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt7628-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7629-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt7629-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8365-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt8365-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8516-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt8516-pwmC*");
