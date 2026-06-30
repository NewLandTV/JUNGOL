#include <stdio.h>

int main(void)
{
    int i;
    int n, m;
    int dp[15];

    scanf("%d %d", &n, &m);

    if (n == m)
    {
        printf("0");

        return 0;
    }

    switch (m)
    {
    case 1:
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;

        break;
    case 2:
        dp[0] = 1;
        dp[1] = 0;
        dp[2] = 2;

        break;
    case 3:
        dp[0] = 1;
        dp[1] = 2;
        dp[2] = 0;

        break;
    default:
        dp[0] = 1;
        dp[1] = 2;
        dp[2] = 4;

        break;
    }

    for (i = 3; i < n; i++)
    {
        if (i == m - 1)
        {
            dp[i] = 0;
        }
        else
        {
            dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
        }
    }

    printf("%d", dp[n - 1]);

    return 0;
}