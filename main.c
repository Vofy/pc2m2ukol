#include <stdio.h>
#include <stdlib.h>

#include "headers.h"

int main()
{
    int selection;
    //(sizeof(array) / sizeof(int)) - Delka jedno-rozmerneho pole

    printf("PC2M - 1\n\n");
    for (;;)
    {
        printf("1) Priklad 1a\n2) Priklad 1b\n3) Priklad 1c\n4) Priklad 1d\n5) BONUS\n6) Konec\n\nVyberte ukol: ");
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
            //exit(EXIT_SUCCESS);
            return 0;
            break;
        default:
            printf("Není implementováno\n");
            break;
        }
        printf("\n\n");
    }

    return 0;
}
