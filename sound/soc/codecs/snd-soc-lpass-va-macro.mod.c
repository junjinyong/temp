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

MODULE_INFO(depends, "snd-soc-lpass-macro-common");

MODULE_ALIAS("of:N*T*Cqcom,sc7280-lpass-va-macro");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-lpass-va-macroC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-lpass-va-macro");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-lpass-va-macroC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8450-lpass-va-macro");
MODULE_ALIAS("of:N*T*Cqcom,sm8450-lpass-va-macroC*");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-lpass-va-macro");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-lpass-va-macroC*");
