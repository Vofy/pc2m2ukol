#include <stdio.h>

#include "../main.h"

void task1c()
{
    const int x = 2, y = 3;

    int matrixA[y][x];
    int matrixB[x][y];

    // Naplnění pole náhodnými čísly
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            matrixA[i][j] = randomInt(0, 99);
        }
    }

    // Vypsání vygenerovaného pole pro kontrolu
    printf("Vygenerovana matice:\n");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%3d", matrixA[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    // Transponování matice
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            matrixB[i][j] = matrixA[j][i];
        }
    }

    // Vypsání transponované matice
    printf("%sTransponovana matice:\n", CYAN);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%3d", matrixB[i][j]);
        }
        printf("\n");
    }
    printf("%s\n", NC);
}
