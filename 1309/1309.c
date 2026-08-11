#include <stdio.h>

int main(void)
{
    int i;
    int n;
    long long f[15];

    f[0] = f[1] = 1;

    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        f[i] = i * f[i - 1];
    }
    
    for (i = n; i > 0; i--)
    {
        printf("%d! = %d", i, i);

        if (i > 1)
        {
            printf(" * %d!\n", i - 1);
        }
        else
        {
            printf("\n");
        }
    }

    printf("%lld", n * f[n - 1]);

    return 0;
}