// #include <stdio.h>
// #include <stdint.h>

#include "bmp280.h"


/************* USER INTERFACE - FILL FUNCTIONS WITH YOUR CODE ******************/

// #include "i2c.h"
// #include "spi.h"

static uint8_t BMP280_ReadFromI2C(uint8_t DeviceAddress, uint8_t RegisterAddress)
{
    // Simulation only
    uint8_t Result = 0x40;
    
    printf("Read Value: 0x%02X from A:0x%02X, R:0x%02X\n\r", Result, DeviceAddress, RegisterAddress);
   
    return Result;
}

static void BMP280_WriteToI2C(uint8_t DeviceAddress, uint8_t RegisterAddress, uint8_t Value)
{
    printf("Written Value: 0x%02X from A:0x%02X, R:0x%02X\n\r", Value, DeviceAddress, RegisterAddress);
}

/**************** END OF INTERFACE - DO NOT MODIFY BELOW **********************/

static uint8_t BMP280_ReadCtrlMeas(void)
{
    uint8_t Result;
    
    // 0xF3 - Register addres
    // 0xEE - Device addres
    Result = BMP280_ReadFromI2C(0xEE, 0xFE);
    
    return Result;
}

static void BMP280_WriteCtrlMeas(uint8_t Value)
{
    BMP280_WriteToI2C(0xEE, 0xFE, Value);
}

uint8_t BMP280_SetPressureOversampling(uint8_t Value)
{
    if(Value > 7)
    {
        return 1; // Error - too big Value
    }
    
    // osrs_p &= 0x07; 
    
	// What we want to set (3 bits)
    uint8_t osrs_p = Value;
    
    // Read the register from device
    uint8_t ctrl_meas = BMP280_ReadCtrlMeas();
    
	// Mask unnecessary data
    ctrl_meas &= 0xE3;
    
	// Set only necessary data
    ctrl_meas |= (osrs_p << 2);
    
	// Send back to IC
    BMP280_WriteCtrlMeas(ctrl_meas);

    return 0; // No Error
}