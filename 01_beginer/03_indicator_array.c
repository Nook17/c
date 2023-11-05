#include<stdio.h>
#include "stdint.h"

uint16_t tab1[] = {8, 513, 734, 612, 87};
uint8_t tab2[] = {7, 99, 1, 2, 113};

uint8_t * wsk1 = tab1;
uint16_t * wsk2 = tab2;

int main()
{
	wsk1 += 3;
	wsk2 += 1;

	int a = *wsk1;
	int b = *wsk2;
	 
	printf("wsk1 = %p\n", a);
	printf("wsk2 = %p\n", b);
}
