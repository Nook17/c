#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint8_t age;
    uint16_t height;
    uint32_t ageInDays;
    uint8_t weight;
} human_t;

human_t nook;
human_t *humanPrt;

void SetData(human_t *humanToModify, uint8_t age, uint16_t height, uint32_t ageInDays, uint8_t weight);
void GetData(human_t *humanToPrinter);

int main()
{
    humanPrt = &nook;
    SetData(humanPrt, 43, 172, 32454, 60);
    GetData(humanPrt);

    return 0;
}

void SetData(human_t *humanToModify, uint8_t age, uint16_t height, uint32_t ageInDays, uint8_t weight)
{
    humanToModify->age = age;
    humanToModify->height = height;
    humanToModify->ageInDays = ageInDays;
    humanToModify->weight = weight;
}

void GetData(human_t *humanPtr)
{
    printf("Age: %d\nHeight: %d\nAge in days: %d\nWeight: %d\n", humanPtr->age, humanPtr->height, humanPtr->ageInDays, humanPtr->weight);
}