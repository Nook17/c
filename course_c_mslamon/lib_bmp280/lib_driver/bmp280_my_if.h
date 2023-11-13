#ifndef __BMP280_MY_IF_H__
#define __BMP280_MY_IF_H__

#include <stdio.h>
#include <stdint.h>

#include "bmp280_drv.h"

// extern BMP280_Driver_t Bmp280_MyDriver;
BMP280_Driver_t* BMP280_GetMyDrv(void);

uint8_t BMP280_Read8(uint8_t RegisterAddress);
void BMP280_Write8(uint8_t RegisterAddress, uint8_t Value);

#endif // __BMP280_MY_IF_H__