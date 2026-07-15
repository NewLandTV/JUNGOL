#include <stdio.h>

#define llu unsigned long long

llu GCD(llu a, llu b)
{
    llu t;

    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }

    return a;
}

llu LCM(llu a, llu b)
{
    return (a * b) / GCD(a, b);
}

int main(void)
{
    llu n;
    llu ah, aw;
    llu bl, br;
    llu la, lb;

    scanf("%llu", &n);
    scanf("%llu %llu", &ah, &aw);
    scanf("%llu %llu", &bl, &br);

    la = (ah + aw) * 2;
    lb = (bl + br) * 2;

    printf("%llu", (n * la) / LCM(la, lb));

    return 0;
}