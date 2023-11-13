#include <stdio.h>
#include <stdint.h>

#include "button.h"

#define __weak __attribute__((weak))
#define UNUSED(x) (void)(x)

__weak void PressedCallback(uint8_t Arg)
{
    UNUSED(Arg);
    // Empty callback
}

void ButtonEvent(void)
{
    if(1) // Check if button was pressed
    {
        PressedCallback(5);
    }
}