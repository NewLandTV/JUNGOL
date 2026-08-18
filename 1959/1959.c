#include <stdio.h>

int main(void)
{
    int i, j;
    int n;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("*");
    }

    printf("\n");
    
    for (i = 0; i < n - 2; i++)
    {
        for (j = 0; j < n - i - 2; j++)
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