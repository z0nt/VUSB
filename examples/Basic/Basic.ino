#include <VUSB.h>

usbMsgLen_t usbFunctionSetup([[maybe_unused]] uchar data[8]) {
  return 0;
}

void setup() {
  usbInit();
}

void loop() {
  usbPoll();
}
