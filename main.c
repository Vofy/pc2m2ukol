#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "main.h"

/*
struct Color {
    char name;
    char value;
};

struct Color * colors[] = {
    { "CYAN", "\033[1;36m" },
    { "NC", "\033[0m" }
};
*/

const char * CYAN = "\033[1;36m";
const char * NC = "\033[0m";

int main()
{
    srand(time(NULL));
    int selection;
    //(sizeof(array) / sizeof(int)) - Délka jedno-rozmerneho pole

    for (;;)
    {
        printf("PC2M - 1\n\n1) Priklad 1a\n2) Priklad 1b\n3) Priklad 1c\n4) Priklad 1d\n5) BONUS\n6) Konec\n\n%sVyberte ukol:%s ", CYAN, NC);
        scanf("%d", &selection);
        printf("\n\n");

        switch (selection)
        {
        case 1:
            task1a();
            break;
        case 2:
            task1b();
            break;
        case 3:
            task1c();
            break;
        case 4:
            task1d();
            break;
        case 5:
            taskBonus();
            break;
        case 6:
            exit(EXIT_SUCCESS);
            //return 0;
            break;
        default:
            printf("Není implementováno\n");
            break;
        }
        printf("%s\n\n", NC);
    }

    return 0;
}
