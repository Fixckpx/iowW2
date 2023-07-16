#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "driver/gpio.h" // เพื่อการใช้งาน digital output (GPIO)
#include "LED.h"

#define gpio 22
int gpio_pin = pin;

void app_main(void)
{
    gpio_reset_pin(gpio);                       // รีเซ็ตสถานะของขาหมายเลข 22
    gpio_set_direction(gpio, GPIO_MODE_OUTPUT); // กำหนดให้ขาหมายเลข 22 เป็น digital output

    while (true) // while (true) = วนรอบไม่มีที่สิ้นสุด
    {
        LEDON(gpio_pin);
        sleep(1); // หน่วงเวลา 1 วินาที
        LEDOFF(gpio_pin);
        sleep(1); // หน่วงเวลา 1 วินาที
    }
}