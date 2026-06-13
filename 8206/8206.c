#include <stdio.h>

typedef struct
{
    int dirX, dirY;
    int value;
} Data;

int main(void)
{
    int i, j;
    int r, c;
    int f[40][40];
    int visit[40][40] = { 0, };
    int x = 0, y = 0;
    Data datas[4];
    int dataLength;
    int max, maxIndex, count;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &f[i][j]);
        }
    }

    count = f[x][y];

    while (x != r - 1 || y != c - 1)
    {
        visit[x][y] = 1;
        dataLength = 0;

        if (x > 0 && !visit[x - 1][y])
        {
            datas[dataLength].dirX = -1;
            datas[dataLength].dirY = 0;
            datas[dataLength++].value = f[x - 1][y];
        }
        if (x < r - 1 && !visit[x + 1][y])
        {
            datas[dataLength].dirX = 1;
            datas[dataLength].dirY = 0;
            datas[dataLength++].value = f[x + 1][y];
        }
        if (y > 0 && !visit[x][y - 1])
        {
            datas[dataLength].dirX = 0;
            datas[dataLength].dirY = -1;
            datas[dataLength++].value = f[x][y - 1];
        }
        if (y < c - 1 && !visit[x][y + 1])
        {
            datas[dataLength].dirX = 0;
            datas[dataLength].dirY = 1;
            datas[dataLength++].value = f[x][y + 1];
        }

        for (i = max = 0; i < dataLength; i++)
        {
            if (max > datas[i].value)
            {
                continue;
            }

            max = datas[i].value;
            maxIndex = i;
        }
        
        x += datas[maxIndex].dirX;
        y += datas[maxIndex].dirY;
        count += max;
    }

    printf("%d", count);

    return 0;
}