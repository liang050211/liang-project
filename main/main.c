#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "driver/gpio.h"
#include "LED.h"
void app_main(void)
{
    led_init();
    while(1)
{
    // gpio_set_level(GPIO_NUM_2, 1);
    // gpio_set_level(GPIO_NUM_4, 1);
    // printf("LED ON\n");
    // vTaskDelay(1000);
    // gpio_set_level(GPIO_NUM_2, 0);
    // gpio_set_level(GPIO_NUM_4, 0);
    // printf("LED OFF\n");
    led_toggle(GPIO_NUM_2);
    led_toggle(GPIO_NUM_4);
    vTaskDelay(1000);
    led_toggle(GPIO_NUM_2);
    led_toggle(GPIO_NUM_4);
    vTaskDelay(1000);

}


}
