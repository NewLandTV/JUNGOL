#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
    int i, j;
    int n;
    int a[2000];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            a[j - 1] = Abs(a[j - 1] - a[j]);
        }
    }

    printf("%d", a[0]);

    return 0;
}