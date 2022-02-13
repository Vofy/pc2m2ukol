void task1c()
{
    int const x = 2, y = 3;
    int sum = 0;
    int array[y][x];

    // Naplnění pole náhodnými čísly
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            array[i][j] = randomInt(0, 99);
        }
    }

    // Vypsání vygenerovaného pole pro kontrolu
    printf("Vygenerovana matice:\n");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%3d", array[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    int transposedMatrix[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            transposedMatrix[i][j] = array[j][i];
        }
    }

    printf("Transponovana matice:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%3d", transposedMatrix[i][j]);
        }
        printf("\n");
    }
}
