#include <stdio.h>

int main(void)
{
    int i, j;
    int n, m;
    int a[20];
    long long s;
    int c = 0;

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // i < 2^n-1
    for (i = 1; i < 1 << n; i++)
    {
        s = 0;

        for (j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                s += a[j];
            }
        }

        if (s == m)
        {
            c++;
        }
    }

    printf("%d", c);

    return 0;
}