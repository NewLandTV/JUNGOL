#include <stdio.h>
#include <math.h>

#define MAX 1000000

int main(void)
{
    int i, j;
    int n, m, k;
    int s;  // 현재 학생 (0, 1, 2, ... n-1)
    int c[1000] = { 0, };   // 각 학생이 박수를 친 횟수
    char prime[MAX + 1] = { 0, };   // 에라토스테네스의 채를 이용한 소수 판별 결과

    scanf("%d %d %d", &n, &m, &k);

    for (i = 2; i <= m; i++)
    {
        prime[i] = 1;
    }

    for (i = 2; i <= sqrt(m); i++)
    {
        if (!prime[i])
        {
            continue;
        }

        for (j = 2; i * j <= m; j++)
        {
            prime[i * j] = 0;
        }
    }
    
    for (i = 1, s = 0; i <= m; i++)
    {
        if (prime[i])
        {
            c[s]++;
        }

        s = (s + 1) % n;
    }

    printf("%d", c[k]);

    return 0;
}