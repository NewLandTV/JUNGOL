#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	int i;
    int n;
    int x;
	
    // 오일러 피 함수로 n에 대한 값을 도출
    while (1)
    {
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }

        for (x = n, i = 2; i <= sqrt(n); i++)
        {
            if (n % i != 0)
            {
                continue;
            }

            for (; n % i == 0; n /= i);

            x -= x / i;
        }

        if (n > 1)
        {
            x -= x / n;
        }
        
        printf("%d\n", x);
    }

    return 0;
}