#include <stdio.h>
#include <math.h>

int prime[1000001];

int main(void)
{
    int i, j;
    int n;
    int m;

    scanf("%d", &n);

    if (n < 8)
    {
        printf("NONE");

        return 0;
    }
    
    prime[0] = prime[1] = 0;

    for (i = 2; i <= n; i++)
    {
        prime[i] = 1;
    }
    
    for (i = 2; i <= sqrt(n); i++)
    {
        if (!prime[i])
        {
            continue;
        }

        for (j = i * i; j <= n; j += i)
        {
            prime[j] = 0;
        }
    }

    printf("2 %d ", n & 1 ? 3 : 2);

    m = n - (n & 1 ? 5 : 4);

    for (i = 2; i <= m; i++)
    {
        if (!prime[i] || !prime[m - i])
        {
            continue;
        }

        printf("%d %d", i, m - i);

        break;
    }

    return 0;
}