#include <stdio.h>

int main(void)
{
    int i, j;
    int r, c;
    char s[1000][1001];
    int x, y;
    int row[1000] = { 0, }, column[1000] = { 0, };

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
    {
        scanf("%s", s[i]);

        for (j = 0; j < c; j++)
        {
            if (s[i][j] == 'X')
            {
                row[j] = column[i] = 1;
            }
        }
    }

    for (i = x = 0; i < c; i++)
    {
        if (!row[i])
        {
            x++;
        }
    }

    for (i = y = 0; i < r; i++)
    {
        if (!column[i])
        {
            y++;
        }
    }

    printf("%d", x > y ? x : y);

    return 0;
}