int least_common_divisor(int a, int b)
{
    int max = b;
    int min = a;
    int remainder = 0;
    if (a > b)
    {
        max = a;
        min = b;
    }
    do
    {
        remainder = max % min;
        max = min;
        min = remainder;
    } while (min);
    return max;
}