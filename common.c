int randomInt(int lower_bound, int upper_bound)
{
    return (rand() % (upper_bound + 1 - lower_bound )) + lower_bound;
}
