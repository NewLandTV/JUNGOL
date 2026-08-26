#include <stdio.h>

int main(void)
{
    long long n;

    scanf("%lld", &n);
    printf("%lld", n * n + n + 2 >> 1);

    return 0;
}