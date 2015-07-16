# mchpemi
MCHPEMI ACPI I2C Module

HP Microchip controller support for HP Synaptics I2C Forcepad.

Kernel reports ACPI component as:

/sys/bus/acpi/devices/MCHP85D9:00

where device path is \_SB_.PCI0.LPCB.EMIC.

$ cat /sys/bus/acpi/devices/MCHP85D9\:00/path

Probing the I2C bus yields the following devices of significance:

$ cat /sys/bus/i2c/devices/i2c-{6,9}/name

DPDDC-A

SMBus I801 adapter at ef80

i2c-6 byte reads to memory address: 0x37, 0x50

i2c-6 byte writes to memory address: 0x30, 0x37, 0x50

i2c-9 byte reads to memory address: 0x44

i2c-9 byte writes to memory address: 0x08, 0x44

