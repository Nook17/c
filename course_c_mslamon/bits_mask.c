#include <stdio.h>
#include <stdint.h>

int main()
{
    printf("*** Read bits from register ***\n\r");

    uint8_t ctrl_meas = 0x4B;                           // 0b010|010|11
    printf("Value to mask: 0x%02X\n",ctrl_meas);

    ctrl_meas &= 0x1C;                                  // 0b010|010|11 & 0b000|111|00
    printf("Value after mask: 0x%02X\n",ctrl_meas);     // 0b000|010|00

    uint8_t osrs_p = (ctrl_meas >> 2);
    printf("Value after shift: 0x%02X\n\r", osrs_p);    // ob00000010

// *************************************************************************************
    printf("*** Write bits to register ***\n\r");

    osrs_p = 2;                     // 0b00000|010| this value write to -> 0b???|010|??
    uint8_t registerSTM32 = 0x45;   // 0b010|001|01
    printf("Value osrs_p: 0x%02X\n", osrs_p);
    printf("Value registerSTM32: 0x%02X\n", registerSTM32);

    registerSTM32 &= ~(0x1C);                              // 0b010|001|01 & 0b111|000|11
    printf("Mask registerSTM32: 0x%02X\n", registerSTM32); // 0b010|000|01

    registerSTM32 |= (osrs_p << 2);
    printf("Write new value to registerSTM32: 0x%02X\n", registerSTM32); // 0b010|010|01

    return 0;
}