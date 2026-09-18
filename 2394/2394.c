#include <stdio.h>
#include <math.h>

#define llu unsigned long long

int Pow(llu base, int exp, int mod)
{
	llu x = 1;
	
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
    int x, y, k;
    int d, r, p;

    scanf("%d %d %d", &x, &y, &k);

    if (x == 0)
    {
        printf("%d", k == 0 ? 0 : -1);

        return 0;
    }

    d = floor(y * log10(x)) + 1;
    
    // 자릿수 검사
    if (d <= k)
    {
        printf("-1");

        return 0;
    }

    r = Pow(10, k + 1, 100007);
    p = Pow(x, y, r);

    printf("%d", (int)(p / (r / 10)) % 10);

    return 0;
}