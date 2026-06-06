#include <stdio.h>

int main(void)
{
    int n;
    int m;  // n의 절반 값으로 연속된 수 중 최댓값입니다.
    int si = 0, ei = 0; // 합의 시작 지점과 끝 지점
    int sum = 0;    // 구간 합
    int count = 1;  // 자기 자신만을 더해서 만들 수 있기 때문에 1로 시작

    scanf("%d", &n);

    m = n + 1 >> 1;

    while (1)
    {
        if (ei == m)
        {
            sum -= ++si;
        }
        else
        {
            if (sum < n)
            {
                sum += ++ei;
            }
            else
            {
                sum -= ++si;
            }
        }

        if (sum == n)
        {
            count++;
        }

        if (si > m && ei >= m)
        {
            break;
        }
    }

    printf("%d", count);

    return 0;
}