#ifndef __BMP280_DRV_H__
#define __BMP280_DRV_H__

#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint8_t (*Read8)(uint8_t);          /* Read byte from BMP280 (uint8_t RegisterAddress) */
    void (*Write8)(uint8_t, uint8_t);   /* Write Byte to BMP280 (uint8_t RegisterAddress, uint8_t Value) */
} BMP280_Driver_t;

#endif // __BMP280_DRV_H__