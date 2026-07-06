#include <stdio.h>

int IsPrime(int  n)
{
    if (n <= 1)
    {
        return 0;
    }

    if (n <= 3)
    {
        return 1;
    }

    if (!(n & 1) || n % 3 == 0)
    {
        return 0;
    }

    int i;

    for (i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int i;
    int n;
    int x;
    int y[2], l;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &x);

        l = 0;

        for (i = 0; i <= 256; i++)
        {
            if (IsPrime(x - i))
            {
                y[l++] = x - i;
            }
            
            if (i != 0 && IsPrime(x + i))
            {
                y[l++] = x + i;
            }

            if (l != 0)
            {
                break;
            }
        }

        for (i = 0; i < l; i++)
        {
            printf("%d ", y[i]);
        }

        printf("\n");
    }

    return 0;
}