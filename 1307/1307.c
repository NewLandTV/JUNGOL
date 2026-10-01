#include <stdio.h>

int main(void)
{
    int i, j;
    int n;
    char c = 'A';
    char s[100][100];

    scanf("%d", &n);

    for (i = n - 1; i >= 0; i--)
    {
        for (j = n - 1; j >= 0; j--)
        {
            if (c > 'Z')
            {
                c = 'A';
            }

            s[j][i] = c++;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%c ", s[i][j]);
        }

        printf("\n");
    }

    return 0;
}