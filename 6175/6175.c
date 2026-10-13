#include <stdio.h>

int main(void)
{
    int i, j;
    int n;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i * 3 + 1; j++)
        {
            printf("c ");
        }

        printf("\n");
    }

    return 0;
}