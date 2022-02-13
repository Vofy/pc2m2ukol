void taskBonus()
{
    int points = 8;

    float pointsArray[points][2]; /*=
    {
        { 5, 10 },
        { 12, 12 },
        { 68, 89 },
        { 41, 21 },
        { 2, 21 },
        { 56, 74 },
        { 86, 36 },
        { 54, 6 }
    }*/

    for (int i = 0; i < points; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            pointsArray[i][j] = randomInt(0, 99);
        }
    }

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

    int x, y;

    for (int i = 0; i < points; i++)
    {
        for (int j = 0; j < points; j++)
        {
            x = pointsArray[0][i] - pointsArray[0][j];
            y = pointsArray[1][i] - pointsArray[1][j];

            distancesArray[i][j] = sqrt(pow(x, 2) + pow(y, 2));
        }
    }

    // Print results

    // Header line
    printf("%10s", "");
    for (int i = 0; i < points; i++)
    {
        printf("P%2d%7s", i + 1, "");
    }
    printf("\n");

    // Lines
    for (int i = 0; i < points; i++)
    {
        printf("P%2d%4s", i + 1, "");
        for (int j = 0; j < points; j++)
        {
            printf("%8.2f%2s", distancesArray[i][j], "");
        }
        printf("\n");
    }
}
