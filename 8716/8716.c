#include <stdio.h>

#define ll long long

ll Pow(ll base, int exp, int mod)
{
	ll x = 1;
	
	for (; exp; exp >>= 1, base = base * base % mod)
	{
		if (exp & 1)
		{
			x = x * base % mod;
		}
	}
	
	return x;
}

int main(void)
{
    ll x, y, n;
    ll a, b, m;

    scanf("%lld %lld %lld", &x, &y, &n);
    scanf("%lld %lld %lld", &a, &b, &m);
    printf("%lld\n", Pow(x, y, n));
    printf("%lld\n", Pow(a, b, m));

    return 0;
}