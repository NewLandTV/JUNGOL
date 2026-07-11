#include <stdio.h>

#define MOD 100003

int main(void)
{
    int i;
    int n;
    int dp[100000];

    scanf("%d", &n);

    dp[0] = 1;
    dp[1] = 2;

    for (i = 2; i < n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2] + 1) % MOD;
    }

    printf("%d", dp[n - 1]);

    return 0;
}