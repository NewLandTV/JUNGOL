#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
    long long x, y;

    scanf("%lld %ld", &x, &y);
    printf("%lld", Abs(x - y));

    return 0;
}