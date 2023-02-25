// If you want, you can change USB_CFG_VENDOR_ID and USB_CFG_DEVICE_ID
// in usbconfig.h in the DigiMouse library directory.

#include <DigiMouse.h>

void
setup() {
  DigiMouse.begin();
  pinMode(1, OUTPUT);
}

void loop() {
  while(true) {
    digitalWrite(1, HIGH);
    DigiMouse.move(5 - random(10),
                   5 - random(10),
                   0);
    DigiMouse.delay(100);
    digitalWrite(1, LOW);
    DigiMouse.delay(random(1000, 10000));
  }
}
