#include <stdio.h>

int main(void)
{
    int i, j;
    int n;
    int dp[100001] = { 0, };

    scanf("%d", &n);
    
    // 모든 숫자를 제곱수 1의 합으로 설정
    for (i = 0; i <= n; i++)
    {
        dp[i] = i;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j * j <= i; j++)
        {
            if (dp[i] > dp[i - j * j] + 1)
            {
                dp[i] = dp[i - j * j] + 1;
            }
        }
    }

    printf("%d", dp[n]);

    return 0;
}