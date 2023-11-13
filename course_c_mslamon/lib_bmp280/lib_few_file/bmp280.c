// #include <stdio.h>
// #include <stdint.h>

#include "bmp280_if.h"
#include "bmp280.h"

static uint8_t BMP280_ReadCtrlMeas(void)
{
    uint8_t Result;
    
    // 0xF3 - Register addres
    // 0xEE - Device addres
    Result = BMP280_Read8(0xEE, 0xFE);
    
    return Result;
}

static void BMP280_WriteCtrlMeas(uint8_t Value)
{
    BMP280_Write8(0xEE, 0xFE, Value);
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





