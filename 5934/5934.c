#include <stdio.h>

int main(void)
{
    int i, j;
    int n;

    scanf("%d", &n);

    if (!(n & 1) || n < 0 || n > 100)
    {
        printf("INPUT ERROR!");

        return 0;
    }

    for (i = 0; i <= n >> 1; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        
        for (j = 0; j <= (n >> 1) - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (i = 1; i <= n >> 1; i++)
    {
        for (j = 0; j < n >> 1; j++)
        {
            printf(" ");
        }
        
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}