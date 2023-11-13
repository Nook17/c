#ifndef __BMP280_MY_IF_H__
#define __BMP280_MY_IF_H__

#include <stdio.h>
#include <stdint.h>

#include "bmp280.h"

uint8_t BMP280_ReadFromI2C(uint8_t DeviceAddress, uint8_t RegisterAddress, uint8_t *Result);
uint8_t BMP280_WriteToI2C(uint8_t DeviceAddress, uint8_t RegisterAddress, uint8_t Value);

BMP280_Driver_t* BMP280_GetMyDrv(void);

#endif // __BMP280_MY_IF_H__