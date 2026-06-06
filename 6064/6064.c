#include <stdio.h>
#include <math.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
    int i;
    double x, y, h; // 입력으로 주어지는 값입니다.
    double a, b, c; // a와 b는 각각 왼쪽 수직 선분의 높이와 오른쪽 수직 선분의 높이, c는 밑변입니다.
    double low, high, mid;  // 이분 탐색에 필요한 변수입니다.
    double p;   // 이분 탐색에 의해 계산된 h의 값입니다.

    scanf("%lf %lf %lf", &x, &y, &h);

    low = 0.0f;
    high = Min(x, y);
    
    /*
    공식: 1 / sqrt(x ^ 2 - c ^ 2) + 1 / sqrt(y ^ 2 - c ^ 2) = 1 / h
    위 공식을 이분 탐색으로 c의 근삿값을 구합니다.
    */
    for (i = 0; i < 100; i++)
    {
        mid = (low + high) * 0.5f;
        a = sqrt(x * x - mid * mid);
        b = sqrt(y * y - mid * mid);
        p = (a * b) / (a + b);

        if (h <= p)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }

    c = low;

    printf("%.3lf", c);

    return 0;
}