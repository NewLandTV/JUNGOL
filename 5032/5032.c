#include <stdio.h>

#define MOD 1000000007

long long dp[1000001] = { 0, };

int main(void)
{
    int i;
    int n;

    scanf("%d", &n);

    dp[1] = 0;
    dp[2] = 1;
    
    for (i = 3; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) * (i - 1) % MOD;
    }

    printf("%lld", dp[n]);

    return 0;
}