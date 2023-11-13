#include <stdio.h>
#include <stdint.h>

#include "bmp280.h"

BMP280_Device_t MyBmp280;
BMP280_Device_t MyBmp280_2;

int main()
{
    printf("Objected  Library - Example #1\n\r");
    
    BMP280_Init(&MyBmp280, 0xEE);
    BMP280_Init(&MyBmp280_2, 0xAA);

    BMP280_SetPressureOversampling(&MyBmp280, 2);
    printf("\n\r");
    BMP280_SetPressureOversampling(&MyBmp280_2, 2);
    
    return 0;
}

