// #include <stdio.h>
// #include <stdint.h>

#include "bmp280.h"

int main()
{
    printf("External Library - Example #2\n\r");
    
    BMP280_SetPressureOversampling(2);
    
    return 0;
}

