#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x4bd6dd9f, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3c067a6c, __VMLINUX_SYMBOL_STR(i2c_dw_func) },
	{ 0xe09a2bb9, __VMLINUX_SYMBOL_STR(i2c_dw_xfer) },
	{ 0x2c7eed90, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xca541f8b, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x4dec6b2e, __VMLINUX_SYMBOL_STR(pm_runtime_forbid) },
	{ 0x89c26bbc, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7a319404, __VMLINUX_SYMBOL_STR(clk_register_fixed_rate) },
	{ 0xa46e9f3, __VMLINUX_SYMBOL_STR(i2c_dw_read_comp_param) },
	{ 0xb4887916, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x8c49ef87, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xaee356d1, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x9e604ff2, __VMLINUX_SYMBOL_STR(i2c_add_numbered_adapter) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xab0b81e4, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x5bb1170b, __VMLINUX_SYMBOL_STR(i2c_dw_isr) },
	{ 0x4a3fface, __VMLINUX_SYMBOL_STR(i2c_dw_disable_int) },
	{ 0x5dcee499, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xb19ee86e, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf4e8ef9b, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xf33e6317, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xd78cbc62, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1b112fee, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x36dce540, __VMLINUX_SYMBOL_STR(i2c_dw_init) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x44a81d5f, __VMLINUX_SYMBOL_STR(acpi_evaluate_object) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x7757b51a, __VMLINUX_SYMBOL_STR(clk_unregister) },
	{ 0xa5b33c58, __VMLINUX_SYMBOL_STR(acpi_match_device) },
	{ 0x8091c48b, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xd0b981fc, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xe6b0b234, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xc64804aa, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x8488bd4d, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x6de40c8a, __VMLINUX_SYMBOL_STR(i2c_dw_disable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-designware-core,i2c-core";

MODULE_ALIAS("acpi*:MCHP85D9:*");
