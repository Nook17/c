// #include <stdio.h>
// #include <stdint.h>

#include "bmp280_drv.h"
#include "bmp280_my_if.h"
#include "bmp280.h"

// #include "i2c.h"
// #include "spi.h"

static BMP280_Driver_t BMP280_I2C_Driver = {
    BMP280_ReadFromI2C,
    BMP280_WriteToI2C
};

BMP280_Driver_t* BMP280_GetMyDrv(void)
{
    return &BMP280_I2C_Driver;
}

uint8_t BMP280_ReadFromI2C(uint8_t DeviceAddress, uint8_t RegisterAddress, uint8_t *Result)
{
    // Simulation only
    *Result = 0x40;
    
    printf("Read Value: 0x%02X from A:0x%02X, R:0x%02X\n\r", *Result, DeviceAddress, RegisterAddress);
   
    return 0;
}

uint8_t BMP280_WriteToI2C(uint8_t DeviceAddress, uint8_t RegisterAddress, uint8_t Value)
{
    printf("Written Value: 0x%02X from A:0x%02X, R:0x%02X\n\r", Value, DeviceAddress, RegisterAddress);
    
    return 0;
}