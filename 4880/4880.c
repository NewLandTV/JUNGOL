#include <stdio.h>

int main(void)
{
    int i, j;
    int n;

    scanf("%d", &n);

    if (n == 1)
    {
        printf("*");

        return 0;
    }
    else if (n == 2)
    {
        printf("**\n**");

        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("*");
    }

    printf("\n");

    for (i = 0; i < n - 2; i++)
    {
        printf("*");

        for (j = 0; j < n - 2; j++)
        {
            printf(" ");
        }

        printf("*\n");
    }

    for (i = 0; i < n; i++)
    {
        printf("*");
    }

    return 0;
}