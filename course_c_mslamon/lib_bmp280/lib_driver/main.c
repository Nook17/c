// #include <stdio.h>
// #include <stdint.h>

#include "bmp280_my_if.h"
#include "bmp280.h"

int main()
{
    printf("External Library - Example #3\n\r");
    
    BMP280_LinkDriver(BMP280_GetMyDrv());
    
    BMP280_SetPressureOversampling(2);
    
    return 0;
}

