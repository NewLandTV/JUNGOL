#include <stdio.h>

int main(void)
{
    int i, j, k, s;
    int n;
    int dp[16][4][3] = { 0, };  // 계단 높이, 직전에 이동한 칸수, 직전 칸수의 연속 횟수

    scanf("%d", &n);

    if (n < 4)
    {
        printf("%d", n);

        return 0;
    }

    dp[1][1][1] = 1;
    dp[2][2][1] = 1;
    dp[3][3][1] = 1;

    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            for (k = 1; k <= 2; k++)
            {
                if (!dp[i][j][k])
                {
                    continue;
                }

                for (s = 1; s <= 3; s++)
                {
                    if (s + i > n)
                    {
                        continue;
                    }

                    if (s != j)
                    {
                        dp[s + i][s][1] += dp[i][j][k];
                    }
                    else if (k == 1)
                    {
                        dp[s + i][s][2] += dp[i][j][k];
                    }
                }
            }
        }
    }

    for (s = 0, i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            s += dp[n][i][j];
        }
    }

    printf("%d", s);

    return 0;
}