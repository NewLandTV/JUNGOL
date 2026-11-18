#include <stdio.h>

#define ll long long

ll GCD(ll a, ll b)
{
    ll temp;

    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    while (b)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int main(void)
{
    ll w, h;
    ll s;

    scanf("%lld %lld", &w, &h);

    s = GCD(w, h);

    printf("%lld", (w / s) * (h / s));

    return 0;
}