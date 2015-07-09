#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/types.h>
#include <linux/acpi.h>

MODULE_AUTHOR("doa379 <doa379@gmail.com>");
MODULE_DESCRIPTION("MCHP Controller Driver");
MODULE_LICENSE("GPL");

static int emi_add(struct acpi_device *device);
static int emi_remove(struct acpi_device *device);
static void emi_notify(struct acpi_device *device, u32 event);

static const struct acpi_device_id emi_device_ids[] = {
	{"MCHP85D9", 0},
	{},
};
MODULE_DEVICE_TABLE(acpi, emi_device_ids);

static struct acpi_driver emi_driver = {
	.name = "emi",
	.class = "MCHPEMI",
	.ids = emi_device_ids,
	.ops =
	{
		.add = emi_add,
		.remove = emi_remove,
		.notify = emi_notify
	},
	.owner = THIS_MODULE,
};

static u32 emi_get_emic(struct acpi_device *device)
{
	u64 emic;
	acpi_status status;

	status = acpi_evaluate_integer(device->handle, (acpi_string) "EMIC", NULL, &emic);

	return emic;
}

static ssize_t emi_show_emic(struct device *dev,
	struct device_attribute *attr, char *buf)
{
	struct acpi_device *device = to_acpi_device(dev);

	return sprintf(buf, "%d\n", emi_get_emic(device));
}

static DEVICE_ATTR(emic, S_IRUGO, emi_show_emic, NULL);

static struct attribute *emi_attributes[] = {
	&dev_attr_emic.attr,
	NULL
};

static const struct attribute_group emi_attr_group = {
	.attrs = emi_attributes,
};

static int emi_add(struct acpi_device *device)
{
	int result;
	result = sysfs_create_group(&device->dev.kobj, &emi_attr_group);
	return result;
}
	
static int emi_remove(struct acpi_device *device)
{
	sysfs_remove_group(&device->dev.kobj, &emi_attr_group);
	return 0;
}

static void emi_notify(struct acpi_device* device, u32 event)
{
	pr_info("emi_notify %x %x\n", event, emi_get_emic(device));
	kobject_uevent(&device->dev.kobj, KOBJ_CHANGE);
}

static int __init emi_init(void)
{
	int result = 0;

	result = acpi_bus_register_driver(&emi_driver);
	if (result < 0) {
		ACPI_DEBUG_PRINT((ACPI_DB_ERROR,
			"Error registering driver\n"));
		return -ENODEV;
	}

	return 0;
}

static void __exit emi_exit(void)
{
	acpi_bus_unregister_driver(&emi_driver);
}


module_init(emi_init);
module_exit(emi_exit);
