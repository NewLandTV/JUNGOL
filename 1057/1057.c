#include <stdio.h>
#include <math.h>

int main(void)
{
    long long n;
    long long low = 1, high, mid;
    int answer;

    scanf("%lld", &n);
    
    // k(k+1)/2 >= n을 만족하는 k의 최솟값 구하기
    answer = high = sqrt(n) * 2 + 2;

    while (low <= high)
    {
        mid = (low + high) >> 1;

        if (mid * (mid + 1) >> 1 < n)
        {
            low = mid + 1;

            continue;
        }
        
        answer = mid;
        high = mid - 1;
    }

    printf("%d", answer);

    return 0;
}