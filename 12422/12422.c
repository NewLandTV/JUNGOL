#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
    int i, j;
    int a, b;
    
    while (1)
    {
        scanf("%d %d", &a, &b);

        if (a < 2 || a > 9 || b < 2 || b > 9)
        {
            printf("INPUT ERROR!\n");

            continue;
        }

        for (i = 0; i <= Abs(a - b); i++)
        {
            for (j = 1; j <= 9; j++)
            {
                printf("%d * %d = %d\n", a + (a < b ? i : -i), j, j * (a + (a < b ? i : -i)));
            }

            printf("\n");
        }

        return 0;
    }

    return 0;
}