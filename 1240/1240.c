#include <stdio.h>

#define llu unsigned long long

int main(void)
{
    llu n;
    llu low = 1, high, mid;
    llu s;

    scanf("%llu", &n);

    if (n == 1)
    {
        printf("1");

        return 0;
    }
    
    // 제곱근 이분탐색
    for (high = n >> 1; low <= high;)
    {
        mid = low + high >> 1;
        s = mid * mid;

        if (s > n || s <= 0)
        {
            high = mid - 1;
        }
        else if (s < n)
        {
            low = mid + 1;
        }
        else
        {
            break;
        }
    }

    if (n < mid * mid)
    {
        mid--;
    }

    printf("%llu", mid);

    return 0;
}