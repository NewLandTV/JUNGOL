#include <stdio.h>

void DFS(int d, int n, int m, int* visit, int* res, int s)
{
    int i;

    if (d == m)
    {
        for (i = 0; i < m; i++)
        {
            printf("%d ", res[i]);
        }

        printf("\n");

        return;
    }

    for (i = 1; i <= n; i++)
    {
        if (visit[i - 1])
        {
            continue;
        }
        
        visit[i - 1] = 1;
        res[s++] = i;

        DFS(d + 1, n, m, visit, res, s);

        s--;
        visit[i - 1] = 0;
    }
}

int main(void)
{
    int n, m;
    int visit[7] = { 0, };
    int res[7], s = 0;

    scanf("%d %d", &n, &m);
    DFS(0, n, m, visit, res, s);

    return 0;
}