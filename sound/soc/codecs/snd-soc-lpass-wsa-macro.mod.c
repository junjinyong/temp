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

MODULE_ALIAS("of:N*T*Cqcom,sc7280-lpass-wsa-macro");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-lpass-wsa-macroC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-lpass-wsa-macro");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-lpass-wsa-macroC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8450-lpass-wsa-macro");
MODULE_ALIAS("of:N*T*Cqcom,sm8450-lpass-wsa-macroC*");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-lpass-wsa-macro");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-lpass-wsa-macroC*");
