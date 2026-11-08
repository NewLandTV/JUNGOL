#include <stdio.h>

int dp[1000001] = { 0, };

int main(void)
{
    int i;
    int n;

    scanf("%d", &n);

    dp[3] = 0;
    dp[4] = 1;

    for (i = 5; i <= n; i++)
    {
        dp[i] = dp[(i + 1) >> 1] + 2;
    }

    printf("%d", dp[n]);

    return 0;
}