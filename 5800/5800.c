#include <stdio.h>

int main(void)
{
    long long p;
    long long x;

    scanf("%lld", &p);

    for (x = 1;; x++)
    {
        if (x * x > p)
        {
            printf("%lld", x * x);

            return 0;
        }
    }

    return 0;
}