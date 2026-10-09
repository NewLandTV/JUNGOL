#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int i;
    int n;
    int count = 0;
    int maxA, minA;

    scanf("%d", &n);
    
    for (i = (n + 2) / 3.0; i <= (n - 1) >> 1; i++)
    {
        maxA = (n - i) >> 1;
        minA = Max(1, n - i * 2);

        if (maxA >= minA)
        {
            count += maxA - minA + 1;
        }
    }

    printf("%d", count);

    return 0;
}