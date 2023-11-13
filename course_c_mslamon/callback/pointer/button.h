#ifndef __BUTTON_H_
#define __BUTTON_H_

#include <stdio.h>
#include <stdint.h>

void PressedCallbackRegister(void (*CallbackPtr)(void));
void PressedCallbackUnregister(void);

void ButtonEvent(void);

#endif // __BUTTON_H_