#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int i;
    int n;
    double a[10000];
    double dp[10001];
    double max;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }

    dp[0] = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] * dp[i - 1] < a[i])
        {
            dp[i] = a[i];
        }
        else
        {
            dp[i] = a[i] * dp[i - 1];
        }

        max = Max(dp[i], max);
    }

    printf("%.3lf", max);

    return 0;
}