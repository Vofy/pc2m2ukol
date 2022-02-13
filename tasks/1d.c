void task1d()
{
    int a = randomInt(2, 20);
    printf("Fib(%d) = %d\n", a, fibonacci(a));
}

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
