void task1d()
{
    const int a = randomInt(2, 20);

    // Vypsání výsledku funkce pro číslo a
    printf("Fib(%d) = %d\n", a, fibonacci(a));
}

// Funkce pro rekurentní výpočet n-tého prvku Fibbonacciho posloupnsti
int fibonacci(int n)
{
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}
