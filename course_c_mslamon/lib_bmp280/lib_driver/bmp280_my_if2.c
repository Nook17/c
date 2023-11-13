#include <stdio.h>
#include <stdint.h>

#include "bmp280_my_if2.h"

#define BMP280_ADDRESS 0xEE
// #include "stm32_i2c.h"
// #include "stm32_spi.h"

static BMP280_Driver_t BMP280_I2C_Driver_2 = {
  BMP280_Write8_2,
  BMP280_Read8_2
};

BMP280_Driver_t* BMP280_GetMyDrv_2(void)
{
    return &BMP280_I2C_Driver_2;
}

uint8_t BMP280_Read8_2(uint8_t RegisterAddress)
{
    // Simulation only
    uint8_t Result = 0x40;
    
    printf("DRIVER 2: ");
    printf("Read Value: 0x%02X from A:0x%02X, R:0x%02X\n\r", Result, BMP280_ADDRESS, RegisterAddress);
   
    return Result;
}

uint8_t BMP280_Write8_2(uint8_t RegisterAddress, uint8_t Value)
{
    printf("DRIVER 2: ");
    printf("Written Value: 0x%02X from A:0x%02X, R:0x%02X\n\r", Value, BMP280_ADDRESS, RegisterAddress);
}
