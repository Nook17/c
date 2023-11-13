#ifndef __BMP280_H__
#define __BMP280_H__

#include <stdio.h>
#include <stdint.h>

#include "bmp280_drv.h"

uint8_t BMP280_LinkDriver(BMP280_Driver_t *NewDriver);
uint8_t BMP280_UnlinkDriver(void);

uint8_t BMP280_SetPressureOversampling(uint8_t Value);

#endif // __BMP280_H__