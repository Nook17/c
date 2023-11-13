#ifndef __BMP280_IF_H__
#define __BMP280_IF_H__

#include <stdio.h>
#include <stdint.h>

#include "bmp280.h"

uint8_t BMP280_ReadFromI2C(BMP280_Device_t *Device, uint8_t RegisterAddress, uint8_t *Result);
uint8_t BMP280_WriteToI2C(BMP280_Device_t *Device, uint8_t RegisterAddress, uint8_t Value);

#endif // __BMP280_IF_H__