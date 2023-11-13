// #include <stdio.h>
// #include <stdint.h>

#include "bmp280.h"


/************* USER INTERFACE - FILL FUNCTIONS WITH YOUR CODE ******************/

// #include "i2c.h"
// #include "spi.h"

static uint8_t BMP280_ReadFromI2C(BMP280_Device_t *Device, uint8_t RegisterAddress, uint8_t *Result)
{
    // Simulation only
    *Result = 0x40;
    
    printf("Read Value: 0x%02X from A:0x%02X, R:0x%02X\n\r", *Result, Device->Address, RegisterAddress);
   
    return 0;
}

static uint8_t BMP280_WriteToI2C(BMP280_Device_t *Device, uint8_t RegisterAddress, uint8_t Value)
{
    printf("Written Value: 0x%02X from A:0x%02X, R:0x%02X\n\r", Value, Device->Address, RegisterAddress);
    
    return 0;
}

/**************** END OF INTERFACE - DO NOT MODIFY BELOW **********************/

static uint8_t BMP280_ReadCtrlMeas(BMP280_Device_t *Device, uint8_t *Result)
{
    // 0xF3 - Register addres
    // 0xEE - Device addres
    BMP280_ReadFromI2C(Device, BMP280_CTRL_MEAS, Result);
    
    return 0;
}

static uint8_t BMP280_WriteCtrlMeas(BMP280_Device_t *Device, uint8_t Value)
{
    BMP280_WriteToI2C(Device, BMP280_CTRL_MEAS, Value);
    
    return 0;
}

uint8_t BMP280_SetPressureOversampling(BMP280_Device_t *Device, uint8_t Value)
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
    BMP280_ReadCtrlMeas(Device, &ctrl_meas);
    
	// Mask unnecessary data
    ctrl_meas &= 0xE3;
    
	// Set only necessary data
    ctrl_meas |= (osrs_p << 2);
    
	// Send back to IC
    BMP280_WriteCtrlMeas(Device, ctrl_meas);

    return 0; // No Error
}

uint8_t BMP280_Init(BMP280_Device_t *Device, uint8_t NewAddress)
{
    if(Device != NULL)
    {
        Device->Address = NewAddress;
        return 0;
    }
    
    // Get calibration Data
    
    
    
    return 1;
}










