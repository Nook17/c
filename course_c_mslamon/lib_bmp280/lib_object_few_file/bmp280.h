#ifndef __BMP280_H__
#define __BMP280_H__

#include <stdio.h>
#include <stdint.h>

#define BMP280_CTRL_MEAS 0xFE

typedef struct
{
    uint8_t Address;
    // Other stuff for single object

} BMP280_Device_t;

uint8_t BMP280_SetPressureOversampling(BMP280_Device_t *Device, uint8_t Value);

uint8_t BMP280_Init(BMP280_Device_t *Device, uint8_t NewAddress);

#endif // __BMP280_H__