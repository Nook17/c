// #include <stdio.h>
// #include <stdint.h>

#include "bmp280_drv.h"
#include "bmp280.h"

static BMP280_Driver_t *Bmp280_Driver;

uint8_t BMP280_LinkDriver(BMP280_Driver_t *NewDriver)
{
    if(NewDriver != NULL)
    {
        Bmp280_Driver = NewDriver;
        return 0;
    }
    
    return 1;
}

uint8_t BMP280_UnlinkDriver(void)
{
    Bmp280_Driver = NULL;
    return 0;
}


static uint8_t BMP280_ReadCtrlMeas(uint8_t *Result)
{
    // 0xF3 - Register addres
    // 0xEE - Device addres
    if(Bmp280_Driver != NULL) // We have to check if whole driver exists, not only pointer to function under structure
    {
        *Result = Bmp280_Driver->Read8(0xFE);
        return 0;
    }
    
    return 1;
}

static uint8_t BMP280_WriteCtrlMeas(uint8_t Value)
{
    if(Bmp280_Driver != NULL) // We have to check if whole driver exists, not only pointer to function under structure
    {
        Bmp280_Driver->Write8(0xFE, Value);
        return 0;
    }
    
    return 1;
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
    uint8_t ctrl_meas;
    BMP280_ReadCtrlMeas(&ctrl_meas);
    
	// Mask unnecessary data
    ctrl_meas &= 0xE3;
    
	// Set only necessary data
    ctrl_meas |= (osrs_p << 2);
    
	// Send back to IC
    BMP280_WriteCtrlMeas(ctrl_meas);

    return 0; // No Error
}