#include <stdio.h>
#include <stdint.h>

#define TAB_SIZE 10

uint8_t tab[TAB_SIZE];

void FunctionTab(uint8_t *tab, uint8_t tabSize);
// void FunctionTab(uint8_t tab[], uint8_t tabSize);

int main()
{
    uint8_t i;

    FunctionTab(tab, TAB_SIZE);

    for(i = 0; i < TAB_SIZE; i++)
    {
        printf("%d ", tab[i]);
    }

    return 0;
}

void FunctionTab(uint8_t *tab, uint8_t tabSize)
// void FunctionTab(uint8_t tab[], uint8_t tabSize)
{
    uint8_t i;

    for(i = 0; i < tabSize; i++)
    {
        tab[i] = i;
    }
}