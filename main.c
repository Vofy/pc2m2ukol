#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int selection;
    int test[10] = {1, 2, 3};
    printf("Test: %d\n", (sizeof(test) / sizeof(int)));

    for (;;)
    {
        printf("1) Priklad 1a\n2) Priklad 1b\n3) Priklad 1c\n4) Priklad 1d\n5) BONUS\n\n");
        scanf("%d", &selection);

        switch (selection)
        {
            case 1:
                printFilledArray(20);
                break;
            case 2:
                printArraySum(3, 3, 3);
                break;
            case 3:
                printTransposedMatrix(2, 3);
                break;
            case 4:
                fibonacci();
                break;
            case 5:
                distances();
                break;
            default:
                printf("Není implementováno\n");
        }
    }

    return 0;
}

void printFilledArray(int size)
{
    srand((unsigned)time(NULL));

    int array[size];

    for (int i = 0; i < size; i++)
    {
        array[i] = randomInt(0, 99);
    }

    printf("Nahodna cisla:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", array[i]);
    }
    printf("\n\n");


    printf("Nahodna cisla v opacnem poradi:\n");
    for (int i = size; i > 0; i--)
    {
        printf("%4d", array[i-1]);
    }
    printf("\n\n");


    //Nebo by to mohlo byt takto:
    /*
    for (int i = 0; i < size; i++)
    {
        printf("%4d", array[size-1-i]);
    }
    printf("\n");
    */

}

void printArraySum(int x, int y, int z)
{
    int sum = 0;
    int array[z][y][x];

    for (int i = 0; i < z; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < x; k++)
            {
                array[k][j][i] = randomInt(0, 99);
                printf("%d", array[k][j][i]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("Vygenerovana cisla:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                printf("%3d", array[k][j][i]);
            }
            printf("\n");
        }
        printf("\n");
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                sum += array[k][j][i];
            }
        }
    }

    printf("Suma je %d\n\n", sum);
}

void printTransposedMatrix(int x, int y)
{
    int sum = 0;
    int array[y][x];

    printf("Vygenerovana matice:\n");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            array[j][i] = randomInt(0, 99);

            printf("%3d", array[j][i]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("Transponovana matice:\n");
    int transposedMatrix[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            transposedMatrix[j][i] = array[i][j];

            printf("%3d", transposedMatrix[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}

void printFibonacci()
{
    int a = randomInt(2, 20);
    printf("f(%d) = %d", a, fibonacci(2));
}

int fibonacci(int number)
{
    return (fibonacci(number - 1) + fibonacci(number - 2));
}

int randomInt(int lower_bound, int upper_bound)
{
    return (rand() % (upper_bound + 1 - lower_bound )) + lower_bound;
}

void distances(int points[])
{
    int pointsArray[8][2];
    int distancesArray[8][8];

    printf("%4s", "");
    for (int i = 1; i <= 8; i++)
    {
        printf("P%d%4s", i, "");
    }
    printf("\n");

    for (int i = 0; i < 8; i++)
    {
        printf("P%d%4s", i, "");
        for (int j = 0; j < 8; j++)
        {
            distancesArray[j][i] = 2;
        }
    }
}
