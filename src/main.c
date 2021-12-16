#include "samd21g18a.h"

#include "instance/port.h"

#include "pio/samd21g18a.h"

#include "api/ArduinoAPI.h"

#include "variant.h"

int sysTickHook(void) { return 0; }

void yield(void) {}

void setup(void) { pinMode(LED_BUILTIN, OUTPUT); }

void loop(void) {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
