#include <stdio.h>

#define ll long long
#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
    int k;
    ll n, c, d; // n=|k|, c: 지수, d: 밑 (k의 소인수분해를 위해 사용되는 변수)
    ll count, sum;  // 각각 서로 다른 정수 p의 개수와 그 합

    scanf("%d", &k);

    for (n = Abs(k), d = 2, count = 1; d * d <= n; d++)
    {
        if (n % d != 0)
        {
            continue;
        }
        
        for (c = 0; n % d == 0;)
        {
            c++;
            n /= d;
        }

        count *= c * 2 + 1;
    }

    if (n > 1)
    {
        count *= 3;
    }
    
    sum = k * ++count * 2;

    printf("%lld %lld", count, sum);

    return 0;
}