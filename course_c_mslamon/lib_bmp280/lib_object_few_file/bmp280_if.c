// #include <stdio.h>
// #include <stdint.h>

#include "bmp280_if.h"
#include "bmp280.h"

// #include "i2c.h"
// #include "spi.h"

uint8_t BMP280_ReadFromI2C(BMP280_Device_t *Device, uint8_t RegisterAddress, uint8_t *Result)
{
    // Simulation only
    *Result = 0x40;
    
    printf("Read Value: 0x%02X from A:0x%02X, R:0x%02X\n\r", *Result, Device->Address, RegisterAddress);
   
    return 0;
}

uint8_t BMP280_WriteToI2C(BMP280_Device_t *Device, uint8_t RegisterAddress, uint8_t Value)
{
    printf("Written Value: 0x%02X from A:0x%02X, R:0x%02X\n\r", Value, Device->Address, RegisterAddress);
    
    return 0;
}