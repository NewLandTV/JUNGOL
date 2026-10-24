#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
    int i, j, k;
    int a, b, c, w;
    int min = 100;
    
    scanf("%d %d %d %d", &a, &b, &c, &w);

    for (i = 0; i <= w; i++)
    {
        for (j = 0; j <= w; j++)
        {
            for (k = 0; k <= w; k++)
            {
                if (a * i + b * j + c * k != w)
                {
                    continue;
                }

                min = Min(i + j + k, min);
            }
        }
    }

    printf("%d", min);

    return 0;
}