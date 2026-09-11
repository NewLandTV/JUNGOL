#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int w = 0, h = 0;
char p[1000][81] = { 0, };
int count = 0;
int max = 0;

void DFS(int x, int y)
{
    count++;
    p[y][x] = '.';

    if (x > 0 && p[y][x - 1] != '.')
    {
        DFS(x - 1, y);
    }
    if (x < w - 1 && p[y][x + 1] != '.')
    {
        DFS(x + 1, y);
    }
    if (y > 0 && p[y - 1][x] != '.')
    {
        DFS(x, y - 1);
    }
    if (y < h - 1 && p[y + 1][x] != '.')
    {
        DFS(x, y + 1);
    }
}

int main(void)
{
    int i, j;

    scanf("%d %d", &w, &h);

    for (i = 0; i < h; i++)
    {
        scanf("%s", p[i]);
    }

    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            if (p[i][j] != '*')
            {
                continue;
            }

            count = 0;

            DFS(j, i);

            max = Max(max, count);
        }
    }
    
    printf("%d", max);

    return 0;
}