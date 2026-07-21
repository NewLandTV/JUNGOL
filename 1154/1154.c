#include <stdio.h>

int w = 0, h = 0;
char map[20][21] = { 0, };
int visit[20][20] = { 0, };
int n = 0;

void DFS(int x, int y)
{
    visit[y][x] = 1;
    n++;

    if (x > 0 && !visit[y][x - 1] && map[y][x - 1] == '.')
    {
        DFS(x - 1, y);
    }
    if (x < w - 1 && !visit[y][x + 1] && map[y][x + 1] == '.')
    {
        DFS(x + 1, y);
    }
    if (y > 0 && !visit[y - 1][x] && map[y - 1][x] == '.')
    {
        DFS(x, y - 1);
    }
    if (y < h - 1 && !visit[y + 1][x] && map[y + 1][x] == '.')
    {
        DFS(x, y + 1);
    }
}

int main(void)
{
    int i, j;
    int x = -1, y = -1;

    scanf("%d %d", &w, &h);

    for (i = 0; i < h; i++)
    {
        scanf("%s", map[i]);

        if (x != -1 && y != -1)
        {
            continue;
        }

        for (j = 0; j < w; j++)
        {
            if (map[i][j] == '@')
            {
                x = j;
                y = i;
            }
        }
    }

    DFS(x, y);
    printf("%d", n);

    return 0;
}