#include "samd21g18a.h"

#include "instance/port.h"

#include "pio/samd21g18a.h"

uint32_t SystemCoreClock;

void SysTick_Handler(void) {
  while (1)
    ;
}

int main(void) {
  SystemInit();

  REG_PORT_OUT0 = PORT_PA17;
}
