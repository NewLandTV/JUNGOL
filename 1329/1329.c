#include <stdio.h>

int main(void)
{
    int i, j;
    int n;

    scanf("%d", &n);
    
    if (n > 100 || !(n & 1))
    {
        printf("INPUT ERROR!");

        return 0;
    }

    for (i = 1; i <= n + 1 >> 1; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        for (j = 1; j < i * 2; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (i = n >> 1; i >= 0; i--)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        for (j = 1; j < i * 2; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}