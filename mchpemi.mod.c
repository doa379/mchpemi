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
	{ 0xfa5c202d, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0x857c7be3, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0x3f463af7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xee4cf1f6, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x7dc6ae, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:MCHP85D9:*");
