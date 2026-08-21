#include <stdio.h>

int w[10][10] = { 0, }; // 역삼각형 구조

int GetWeightSum(int height, int x, char dir)   // 한 층의 모든 공의 무게 합을 방향에 따라 계산
{
    int sum = 0;
    int h = height;
    int pos = x;

    while (h < 10 && pos <= h)
    {
        sum += w[h++][pos];

        if (dir == 'r')
        {
            pos++;
        }
    }

    return sum;
}

void FillEmpty(int height, int x)  // 빈자리 메우기
{
    int l, r;
    int ls, rs;

    while (1)
    {
        if (height >= 9)    // 최상단 층이면 현재 칸 비우기
        {
            w[height][x] = 0;

            break;
        }

        l = w[height + 1][x];   // 왼쪽 위 공의 무게
        r = w[height + 1][x + 1];   // 오른쪽 위 공의 무게

        if (l == 0 && r == 0)   // 위쪽에 공이 없으면 현재 칸 비우기
        {
            w[height][x] = 0;

            break;
        }

        ls = GetWeightSum(height + 1, x, 'l');
        rs = GetWeightSum(height + 1, x + 1, 'r');

        if (ls > rs)
        {
            w[height][x] = w[height + 1][x];
        }
        else
        {
            w[height][x] = w[height + 1][x + 1];
            x++;
        }

        height++;
    }
}

int main(void)
{
    int i, j;
    int n;
    int c = 0;

    scanf("%d", &n);

    for (i = 0; i < 10 && c < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (c == n)
            {
                break;
            }

            scanf("%d", &w[i][j]);

            c++;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", w[0][0]);
        FillEmpty(0, 0);
    }

    return 0;
}