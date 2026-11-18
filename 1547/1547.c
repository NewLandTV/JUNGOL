#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y, z;
    int n;
    int count = 0;

    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        if (x * x * 2 > n * n)
        {
            break;
        }

        for (y = x; y <= n; y++)
        {
            z = x * x + y * y;

            if (z > n * n)
            {
                break;
            }

            if ((int)sqrt(z) * (int)sqrt(z) == z)
            {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}