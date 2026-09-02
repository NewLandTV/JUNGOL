#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int i, j;
    int n;
    int a[50];
    int x, y;
    int result = 0;

    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j || a[i] + a[j] & 1)
            {
                continue;
            }

            x = (a[i] + a[j]) >> 1;
            y = (a[i] - a[j]) >> 1;

            if (x > 0 && y > 0 && x != y)
            {
                result = Max(result, x * y);
            }
        }
    }

    printf("%d", result);

    return 0;
}