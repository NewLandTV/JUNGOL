#include <stdio.h>

long long Solve(int n)
{
    int i, j;
    long long s = n * n + n >> 1;
    long long t;
    long long dp[781] = { 0, };
    
    if (s & 1)
    {
        return 0;
    }

    t = s >> 1;
    dp[0] = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = t; j >= i; j--)
        {
            dp[j] += dp[j - i];
        }
    }

    return dp[t] >> 1;
}

int main(void)
{
    int n;

    scanf("%d", &n);
    printf("%lld", Solve(n));

    return 0;
}