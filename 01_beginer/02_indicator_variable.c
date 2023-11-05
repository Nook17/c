#include<stdio.h>

int main()
{
	int var_test = 10;
	int *addr;
	int var_val = 0;

	addr = &var_test;
	var_val = *addr;
 
	printf("Address var_test = %p\n", (void *) &var_test);
	printf("Address var_test = %p\n", addr);
	printf("Value indicator = %d\n", var_val);

	struct n_struct {
		int x, y;
	} point, *nPointer;

	nPointer = &point;
	printf("Address n_struct = %p\n", nPointer);
	
	nPointer->x = 2;
	nPointer->y = 17;
	printf("x = %d y = %d\n", point.x, point.y);
}
