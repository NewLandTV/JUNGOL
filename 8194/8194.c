#include <stdio.h>

int main(void)
{
    int i, j;
    int n, m;
    int a, b;
    int up = 0;

    scanf("%d %d", &n, &m);
    scanf("%d %d", &a, &b);

    if (n == 1)
    {
        for (i = 0; i < m; i++)
        {
            printf("%c", m - b - 1 >= i ? 'E' : 'W');
        }

        return 0;
    }

    for (i = 0; i < n; i++)
    {
        if (!up && a == i)
        {
            up = 1;

            for (j = 0; j < m; j++)
            {
                printf("%c", b >= j ? 'E' : 'W');
            }

            printf("\n");
            
            continue;
        }

        for (j = 0; j < m; j++)
        {
            printf("%c", up ? 'N' : 'S');
        }

        printf("\n");
    }

    return 0;
}