// #include <stdio.h>
// #include <stdint.h>

#include "bmp280_drv.h"
#include "bmp280_my_if.h"

#define BMP280_ADDRESS 0xEE
// #include "i2c.h"
// #include "spi.h"

static BMP280_Driver_t Bmp280_MyDriver = {
    BMP280_Read8,
    BMP280_Write8
};

BMP280_Driver_t* BMP280_GetMyDrv(void)
{
    return &Bmp280_MyDriver;
}

uint8_t BMP280_Read8(uint8_t RegisterAddress)
{
    // Simulation only
    uint8_t Result = 0x40;
    
    printf("Read Value: 0x%02X from A:0x%02X, R:0x%02X\n\r", Result, BMP280_ADDRESS, RegisterAddress);
   
    return Result;
}

void BMP280_Write8(uint8_t RegisterAddress, uint8_t Value)
{
    printf("Written Value: 0x%02X from A:0x%02X, R:0x%02X\n\r", Value, BMP280_ADDRESS, RegisterAddress);
}
