#include <stdio.h>

#include "../main.h"

void task1b()
{
    const int x = 3, y = 3, z = 3;
    int sum = 0;
    int array[z][y][x];

    // Naplnění pole náhodnými čísly
    for (int i = 0; i < z; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < x; k++)
            {
                array[i][j][k] = randomInt(0, 99);
            }
        }
    }

    // Vypsání vygenerovaného pole pro kontrolu
    printf("Vygenerovana cisla:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                printf("%3d", array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // Vypsání sumy pole
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                sum += array[i][j][k];
            }
        }
    }

    printf("%sSuma je %d%s\n", CYAN, sum, NC);
}
