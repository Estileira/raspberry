#include <stdio.h>
#include "pico/stdlib.h"

const int PIN_LED = 28;
int main() {
    gpio_init(PIN_LED);
    gpio_set_dir(PIN_LED,GPIO_OUT);
    while (true) {
    gpio_put (PIN_LED,1);
    sleep_ms(500);
    gpio_put(PIN_LED,0);
    sleep_ms(500);
    }
return 0;
}

