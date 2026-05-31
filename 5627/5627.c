#include <stdio.h>
#include <math.h>

double Log(double x, double base)
{
    return log(x) / log(base);
}

int main(void)
{
    long long n;

    scanf("%lld", &n);
    printf("%d", n == 0 ? 0 : (int)ceil(Log(n, 2)) + 1);

    return 0;
}