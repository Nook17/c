// #include <stdio.h>
// #include <stdint.h>

#include "bmp280_if.h"

// #include "i2c.h"
// #include "spi.h"

uint8_t BMP280_Read8(uint8_t DeviceAddress, uint8_t RegisterAddress)
{
    // Simulation only
    uint8_t Result = 0x40;
    
    printf("Read Value: 0x%02X from A:0x%02X, R:0x%02X\n\r", Result, DeviceAddress, RegisterAddress);
   
    return Result;
}

void BMP280_Write8(uint8_t DeviceAddress, uint8_t RegisterAddress, uint8_t Value)
{
    printf("Written Value: 0x%02X from A:0x%02X, R:0x%02X\n\r", Value, DeviceAddress, RegisterAddress);
}


