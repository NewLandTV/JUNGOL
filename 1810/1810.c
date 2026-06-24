#include <stdio.h>

int main(void)
{
    int i;
    int a[9];
    int sum = 0;
    int x, y;

    for (i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);

        sum += a[i];
    }

    for (x = 0; x < 9; x++)
    {
        for (y = x + 1; y < 9; y++)
        {
            if (sum - a[x] - a[y] != 100)
            {
                continue;
            }

            for (i = 0; i < 9; i++)
            {
                if (i != x && i != y)
                {
                    printf("%d\n", a[i]);
                }
            }
        }
    }

    return 0;
}