#include <stdio.h>

int main(void)
{
    int i, j;
    int a, b;

    scanf("%d %d", &a, &b);

    for (i = a; a > b ? i >= b : i <= b; a > b ? i-- : i++)
    {
        for (j = 1; j <= 9; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }

    return 0;
}