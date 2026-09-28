#include <stdio.h>

int main(void)
{
    int i, j;
    int s, e;

    while (1)
    {
        scanf("%d %d", &s, &e);

        if (s < 2 || s > 9 || e < 2 || e > 9)
        {
            printf("INPUT ERROR!\n");

            continue;
        }

        for (i = 1; i <= 9; i++)
        {
            for (j = s; s > e ? j >= e : j <= e; s > e ? j-- : j++)
            {
                printf("%d * %d = %2d   ", j, i, i * j);
            }

            printf("\n");
        }

        break;
    }

    return 0;
}