#include <stdio.h>

int main(void)
{
    int n;
    int a, b;
    int count = 0;

    scanf("%d", &n);

    for (a = 1; a < n; a++)
    {
        for (b = 1; b < n; b++)
        {
            if (a * a == b * b + n)
            {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}