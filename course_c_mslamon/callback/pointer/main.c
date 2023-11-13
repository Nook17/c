#include "button.h"

void ButtonPressedMessage(void);
void ButtonPressedMessage2(void);

int main()
{
    printf("Before Register ...\n\r");
    ButtonEvent();
    
    PressedCallbackRegister(ButtonPressedMessage);

    printf("After Register\n\r");
    ButtonEvent();
    
    PressedCallbackRegister(ButtonPressedMessage2);

    printf("After Register2\n\r");
    ButtonEvent();
    
    // PressedCallbackRegister(NULL);
    PressedCallbackUnregister();
    printf("After Unregister\n\r");
    ButtonEvent();
    
    return 0;
}

void ButtonPressedMessage(void)
{
   printf("Pressed!\n\r"); 
}

void ButtonPressedMessage2(void)
{
   printf("Pressed2!\n\r"); 
}