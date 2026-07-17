#include <stdio.h>

#define llu unsigned long long

int main(void)
{
    llu i;
    llu n;
    
    scanf("%llu", &n);

    if (n > 28)
    {
        printf("%llu", (n - 1) / 7 + 4);

        return 0;
    }

    for (i = 1; i <= 7; i++)
    {
        if (i * (i + 1) >= n << 1)
        {
            printf("%llu", i);

            return 0;
        }
    }

    return 0;
}