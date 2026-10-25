#include <stdio.h>

int main(void)
{
    int i, j;
    int n;
    int t;

    scanf("%d", &n);
    scanf("%d", &t);

    for (i = 0; i < n * 2 - 1; i++)
    {
        printf("*");
    }

    printf("\n");

    for (i = 0; i < n - 2; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        printf("*");

        for (j = 0; j < n * 2 - (i + 1) * 2 - 1; j++)
        {
            printf("%c", i >= t ? '.' : ' ');
        }

        printf("*\n");
    }

    for (i = 0; i < n - 2; i++)
    {
        printf(" ");
    }

    printf("* *\n");

    for (i = n - 3; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        printf("*");

        for (j = 0; j < n * 2 - (i + 1) * 2 - 1; j++)
        {
            printf("%c", i >= t ? ' ' : '.');
        }

        printf("*\n");
    }

    for (i = 0; i < n * 2 - 1; i++)
    {
        printf("*");
    }

    return 0;
}