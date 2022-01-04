This is a library wrapper of [VUSB](https://github.com/obdev/v-usb) driver for Arduino IDE.

In order to customize the driver from the sketch you need to create [platform.local.txt](https://arduino.github.io/arduino-cli/0.19/platform-specification/#platformlocaltxt) and add the following:
```
build.extra_flags=-I{build.source.path}
```
Now you can override any option in [usbconfig.h](https://github.com/obdev/v-usb/blob/master/usbdrv/usbconfig-prototype.h) by creating `vusbconfig.h` in your sketch folder and redefine any macro.
