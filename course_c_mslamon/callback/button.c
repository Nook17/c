#include "button.h"

void (*PressedCallback)(void); // Callback for button pressed

void ButtonEvent(void)
{
    if(1) // Check if button was pressed
    {
        if(PressedCallback != NULL) // Check if callback exists
        {
            (*PressedCallback)(); // Execute callback
        }
    }
}

void PressedCallbackRegister(void (*CallbackPtr)(void))
{
    PressedCallback = CallbackPtr;
}

void PressedCallbackUnregister(void)
{
    PressedCallback = NULL;
}
