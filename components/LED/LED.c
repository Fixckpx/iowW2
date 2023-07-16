#include <stdio.h>
#include "LED.h"
#include "driver/gpio.h"

void ON(int gpio_pin)
{
    gpio_set_level(gpio_pin, 1);
}
void OFF(int gpio_pin)
{
    gpio_set_level(gpio_pin, 0);
}