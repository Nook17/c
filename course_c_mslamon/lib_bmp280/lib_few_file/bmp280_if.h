#ifndef __BMP280_IF_H__
#define __BMP280_IF_H__

#include <stdio.h>
#include <stdint.h>

uint8_t BMP280_Read8(uint8_t DeviceAddress, uint8_t RegisterAddress);
void BMP280_Write8(uint8_t DeviceAddress, uint8_t RegisterAddress, uint8_t Value);

#endif // __BMP280_IF_H__