#include <stdio.h>
#include <math.h>

#include "../main.h"

void taskBonus()
{
    int points = 8;
    int x, y;
    float pointsArray[points][2];

    // Naplnění pole náhodnými čísly
    for (int i = 0; i < points; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            pointsArray[i][j] = randomInt(-20, 20);
        }
    }

    // Vypsání vygenerovaného pole pro kontrolu
    for (int i = 0; i < points; i++)
    {
        printf("P%d: ", i + 1);
        for (int j = 0; j < 2; j++)
        {
            printf("%3.0f ", pointsArray[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    float distancesArray[points][points];


    // Výpočet vzdáleností bodů
    for (int i = 0; i < points; i++)
    {
        for (int j = 0; j < points; j++)
        {
            x = pointsArray[i][0] - pointsArray[j][0];
            y = pointsArray[i][1] - pointsArray[j][1];

            distancesArray[i][j] = sqrt(pow(x, 2) + pow(y, 2));
        }
    }

    // Vypsání výsledků do tabulky

    // První řádek - hlavička
    printf("%s%10s", CYAN, "");
    for (int i = 0; i < points; i++)
    {
        printf("P%2d%7s", i + 1, "");
    }
    printf("\n");

    // Ostatní řádky
    for (int i = 0; i < points; i++)
    {
        printf("P%2d%4s", i + 1, "");
        for (int j = 0; j < points; j++)
        {
            printf("%8.2f%2s", distancesArray[i][j], "");
        }
        printf("\n");
    }
    printf("%s\n", NC);
}
