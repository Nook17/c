#include <stdio.h>
#include <stdint.h>

int main()
{
    printf("*** Checking the bit setting. Bit is set to 1 or 0 ***\n\r");

    // uint8_t value = 0x28;       // 0b 0010 1000  -> bit5-1 bit3-1
    uint8_t value = 0xC4;       // 0b 1100 0100  -> bit5-0 bit3-0
    // uint8_t value = 0xCC;       // 0b 1100 1100  -> bit5-0 bit3-1

// One bit check - is set?
    if(value & (1<<3))
    {
        printf("Bit is set\n");
    }
    else
    {
        printf("Bit is not set\n");
    }
// One bit check - is cleared?
    if(!(value & (1<<3)))
    {
        printf("C: Bit is not set\n");
    }
    else
    {
        printf("C: Bit is set\n");
    }
// One of few bits check   
    if(value & ((1<<3) | (1<<5)))
    {
        printf("One or more bits are set\n");
    }
    else
    {
        printf("None of bits are set\n");
    }
// One of few bits check - reverse  
    if(!((value & (1<<3)) && (value & (1<<5))))
    {
        printf("C: One or more bits are clear\n");
    }
    else
    {
        printf("C: None of bits are clear\n");
    }
// Every bit is set check  
    if((value & (1<<3)) && (value & (1<<5)))
    {
        printf("All bits are set\n");
    }
    else
    {
        printf("None or only one of bits are set\n");
    }
// Every bit is clear check 
    if(!(value & ((1<<3) | (1<<5))))
    {
        printf("C: All bits are cleared\n");
    }
    else
    {
        printf("C: None or only one of bits are cleared\n");
    }

    return 0;
}