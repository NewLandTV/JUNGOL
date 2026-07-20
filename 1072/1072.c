#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int i;
    int n, m;
    int a[100];
    int sum = 0;
    int max = 0;

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        
        if (i < m)
        {
            sum += a[i];
        }
    }

    max = sum;

    for (i = 0; i < n - m; i++)
    {
        sum += a[i + m] - a[i];
        max = Max(sum, max);
    }

    printf("%d", max);

    return 0;
}