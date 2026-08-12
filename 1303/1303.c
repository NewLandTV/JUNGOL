#include <stdio.h>

int main(void)
{
    int i, j;
    int n, m;

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            printf("%d ", m * i + j);
        }

        printf("\n");
    }

    return 0;
}