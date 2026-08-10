#include <stdio.h>

int main(void)
{
    int i;
    int n;
    int dp[31];
    int s = 0;

    scanf("%d", &n);

    dp[0] = dp[1] = 1;

    for (i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] * 2;
    }

    if (n & 1)
    {
        s = dp[(n - 1) >> 1];
    }
    else
    {
        s = dp[n >> 1] +  dp[(n >> 1) - 1] * 2;
    }

    printf("%d", dp[n] + s >> 1);

    return 0;
}