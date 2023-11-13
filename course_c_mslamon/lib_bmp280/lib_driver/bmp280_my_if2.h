#ifndef __BMP280_MY_IF2_H__
#define __BMP280_MY_IF2_H__

#include <stdio.h>
#include <stdint.h>

#include "bmp280_drv.h"
#include "bmp280_my_if2.h"

uint8_t BMP280_Read8_2( uint8_t RegisterAddress);
uint8_t BMP280_Write8_2(uint8_t RegisterAddress, uint8_t Value);

// extern BMP280_Driver_t BMP280_I2C_Driver; // extern

BMP280_Driver_t* BMP280_GetMyDrv_2(void);

#endif // __BMP280_MY_IF2_H__