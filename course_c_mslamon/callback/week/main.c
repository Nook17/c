#include <stdio.h>
#include <stdint.h>

#include "button.h"

int main()
{
    printf("Callback on __weak with argument\n\r");
    ButtonEvent();
    
    return 0;
}

void PressedCallback(uint8_t Arg)
{
  printf("Pressed! %d\n\r", Arg); 
}