#ifndef LED_H
#define LED_H

#include "driver/gpio.h"

void led_init(void);
void led_toggle(gpio_num_t gpio_num);

#endif 
