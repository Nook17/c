// #include <stdio.h>
// #include <stdint.h>

#include "bmp280.h"
#include "bmp280_my_if.h"

BMP280_Device_t MyBmp280;
BMP280_Device_t MyBmp280_2;
BMP280_Device_t MyBmp280_3;

int main()
{
    printf("Objected  Library - Example #1\n\r");
    
    BMP280_Init(&MyBmp280, 0xEE);
    BMP280_Init(&MyBmp280_2, 0xAA);
    BMP280_Init(&MyBmp280_3, 0xBB);
    
    BMP280_LinkDriver(&MyBmp280, BMP280_GetMyDrv());
    BMP280_LinkDriver(&MyBmp280_2, BMP280_GetMyDrv());
    BMP280_LinkDriver(&MyBmp280_3, BMP280_GetMyDrv());

    BMP280_SetPressureOversampling(&MyBmp280, 2);
    printf("\n\r");
    BMP280_SetPressureOversampling(&MyBmp280_2, 2);
    printf("\n\r");
    BMP280_SetPressureOversampling(&MyBmp280_3, 2);
    
    return 0;
}

