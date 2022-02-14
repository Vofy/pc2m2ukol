#include <stdio.h>

#include "../headers.h"

void task1a()
{
    const int size = 20;
    int array[size];

    // Naplnění pole náhodnými čísly
    for (int i = 0; i < size; i++)
    {
        array[i] = randomInt(0, 99);
    }

    // Vypsání vygenerovaného pole pro kontrolu
    printf("Vygenerovana nahodna cisla:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", array[i]);
    }
    printf("\n\n");

    // Vypsání pole v opačném pořadí
    printf("Nahodna cisla v opacnem poradi:\n");
    for (int i = size; i > 0; i--)
    {
        printf("%4d", array[i-1]);
    };
    printf("\n");
}
