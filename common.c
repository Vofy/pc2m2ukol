#include <stddef.h>
#include <stdlib.h>
#include <time.h>

int randomInt(int lower_bound, int upper_bound)
{
    srand((unsigned)time(NULL));
    return (rand() % (upper_bound - lower_bound + 1)) + lower_bound;
}
