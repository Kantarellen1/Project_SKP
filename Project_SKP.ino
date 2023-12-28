#include <Arduino_MKRIoTCarrier.h>
MKRIoTCarrier carrier;

uint32_t myCustomColor = carrier.leds.Color(255,100,50);

void setup() {
   carrier.noCase();
   carrier.begin();
   carrier.leds.fill(myCustomColor, 0, 5);
   carrier.leds.show();
}

void loop() {
    carrier.leds.fill(myCustomColor, 0, 5);
    carrier.leds.show();
    delay(1000);
    carrier.leds.clear();
    carrier.leds.show();
    delay(1000);
}