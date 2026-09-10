#include <stdio.h>

int main(void)
{
    int i;
    int n, m;
    
    scanf("%d %d", &n, &m);
    
    while ((n -= 2) > 0)
    {
        for (i = 0; i < m; i++)
        {
            printf("*");
        }

        printf("\n*");

        for (i = 0; i < m - 2; i++)
        {
            printf(" ");
        }

        printf("*\n");
    }
    
    for (i = 0; i < m; i++)
    {
        printf("*");
    }

    return 0;
}