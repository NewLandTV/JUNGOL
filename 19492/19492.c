#include <stdio.h>
#include <math.h>

#define MAX 40001

int prime[MAX] = { 0, };

inline void Fix(int start, int step, int flag)
{
    int i;

    for (i = start; i < MAX; i += step)
    {
        prime[i] = flag;
    }
}

void Eratosthenes()
{
    int i, j;
    int next, n;

    prime[2] = prime[3] = 1;

    Fix(5, 6, 1);
    Fix(7, 6, 1);

    for (i = 5, j = 25; j < MAX; i += next, j = i * i)
    {
        next = (i - 3) % 6;

        if (!prime[i])
        {
            continue;
        }

        n = i * 6;

        Fix(j, n, 0);
        Fix(next * i + j, n, 0);
    }
}

int main(void)
{
    int i, j;
    int n;
    int p1, p2, kk; // 첫 번째 소수, 두 번째 소수, k^2 - 1=p1 * p2 => (k-1)(k+1) = p1 * p2

    Eratosthenes();
    scanf("%d", &n);

    for (i = 2; i < MAX; i++)
    {
        if (!prime[i - 2] || !prime[i])
        {
            continue;
        }
        
        kk = (i - 2) * i + 1;

        if (kk <= n * n)
        {
            printf("%d\n", (int)sqrt(kk));
        }
    }

    return 0;
}