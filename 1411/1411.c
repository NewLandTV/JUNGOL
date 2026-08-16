#include <stdio.h>

#define MOD 20100529

int main(void)
{
    int i;
    int n;
    int dp[100000];

    scanf("%d", &n);

    dp[0] = 1;
    dp[1] = 3;

    for (i = 2; i < n; i++)
    {
        dp[i] = dp[i - 2] * 2 + dp[i - 1];
        dp[i] %= MOD;
    }

    printf("%d", dp[n - 1]);

    return 0;
}