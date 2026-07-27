#include <stdio.h>

int x[1000][1000] = { 0, };
int a[1000] = { 0,};

int main(void)
{
    int i, j;
    int n;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }

    if (n == 2)
    {
        a[0] = x[0][1] >> 1;
        a[1] = x[1][0] >> 1;
    }
    else
    {
        a[0] = (x[0][1] + x[0][2] - x[1][2]) >> 1;

        for (i = 1; i < n; i++)
        {
            a[i] = x[0][i] - a[0];
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}