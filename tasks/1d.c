#include <stdio.h>

#include "../main.h"

// Funkce pro rekurentní výpočet n-tého prvku Fibbonacciho posloupnsti
int fibonacci(int n)
{
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

void task1d()
{
    const int a = randomInt(2, 20);

    // Vypsání výsledku funkce pro číslo a
    printf("%sFib(%d) = %d%s\n", CYAN, a, fibonacci(a), NC);
}
