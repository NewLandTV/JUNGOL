#include <stdio.h>

int main(void)
{
    int i, j;
    int n;
    int b[100][100];
    int column, row;
    int x = -1, y = -1;
    int rC = 0, cC = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (column = row = j = 0; j < n; j++)
        {
            column += b[j][i];
            row += b[i][j];
        }

        if (row & 1)
        {
            x = i + 1;
            rC++;
        }

        if (column & 1)
        {
            y = i + 1;
            cC++;
        }
    }

    if (rC == 0 && cC == 0)
    {
        printf("OK");
    }
    else if (rC == 1 && cC == 1)
    {
        printf("Change bit (%d,%d)", x, y);
    }
    else
    {
        printf("Corrupt");
    }

    return 0;
}