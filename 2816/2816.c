#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))
#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    long long i;
    long long a, b;
    long long x, y, diff;

    scanf("%lld %lld", &a, &b);

    x = Max(a, b);
    y = Min(a, b);
    diff = Max(x - y - 1, 0);

    printf("%lld\n", diff);

    if (diff == 0)
    {
        return 0;
    }

    for (i = y + 1; i < x; i++)
    {
        printf("%lld ", i);
    }

    return 0;
}