#include <stdio.h>
#include <math.h>

int isPrime[1000001] = { 0, };

// end까지의 수 중 소수가 맞는지 아닌지 판별 결과를 구하는 함수
void Eratosthenes(int end)
{
    int i, j, k;

    isPrime[0] = isPrime[1] = 0;    // 0과 1은 소수가 아님
    
    // 우선 2부터 end까지의 수를 모두 소수로 초기화
    for (i = 2; i <= end; i++)
    {
        isPrime[i] = 1;
    }

    for (i = 0; i < 5; i++)
    {
        // 어떤 수를 제외한 그 배수를 지우기 (sqrt(n) 이하의 배수까지)
        for (j = 2; j <= sqrt(end); j++)
        {
            if (!isPrime[j])
            {
                continue;
            }
            
            // j의 배수를 소수 목록에서 지우기 (j는 소수이고, j의 배수는 소수가 아니다)
            for (k = j * 2; k <= end; k += j)
            {
                isPrime[k] = 0;
            }
        }
    }
}

int main(void)
{
    int i;
    int n;

    scanf("%d", &n);
    Eratosthenes(n);

    for (i = 2; i < n; i++)
    {
        if (isPrime[i] && isPrime[n - i])
        {
            printf("%d = %d + %d", n, i, n - i);

            return 0;
        }
    }

    printf("Goldbach's conjecture is wrong.");

    return 0;
}