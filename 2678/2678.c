#include <stdio.h>

int main(void)
{
    long long n;

    scanf("%lld", &n);
    printf("%lld", (long long)(1l << n));

    return 0;
}