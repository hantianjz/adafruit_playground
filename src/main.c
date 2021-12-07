#include "samd21g18a.h"

#include "instance/port.h"

#include "pio/samd21g18a.h"

#include <stdbool.h>

int sysTickHook(void) { return 0; }

uint32_t SystemCoreClock;

void SysTick_DefaultHandler(void) {
  while (1) {
  };
}

int main(void) {
  SystemInit();

  while (true) {
    REG_PORT_OUT0 = PORT_PA17;

    for (int i = 0; i < 100000; i++) {
    }

    REG_PORT_OUTCLR0 = PORT_PA17;
  }
}
