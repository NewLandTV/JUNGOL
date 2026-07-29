#include <stdio.h>

#define MOD 1000000007

int main(void)
{
    int i;
    int n;
    long long x = 1;

    scanf("%d", &n);
    
    for (i = n - 1; i > 0; i -= 2)
    {
        x *= i;
        x %= MOD;
    }

    printf("%lld", x % MOD);

    return 0;
}