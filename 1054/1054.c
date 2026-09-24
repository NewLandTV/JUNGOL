#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    int p, n;
    double x;   // sqrt(p)
    int gpc, lpc;   // 각각 sqrt(p)보다 큰 후보, 작은 후보
    int greMol = -1, greDen = -1;   // sqrt(p)보다 큰 분수 중에 가장 가까운 분수
    int lesMol = -1, lesDen = -1;   // sqrt(p)보다 작은 분수 중에 가장 가까운 분수

    scanf("%d %d", &p, &n);

    x = sqrt(p);

    for (i = 1; i <= n; i++)
    {
        gpc = floor(x * i) + 1;

        if (gpc > n)
        {
            continue;
        }
        
        // sqrt(p)보다 큰 분수의 후보 gpc/i가 greMol/greDen보다 작은지 비교
        if (greMol == -1 || greDen * gpc < greMol * i)
        {
            greMol = gpc;
            greDen = i;
        }

        lpc = gpc - 1;

        if (lpc > n || lpc <= 0)
        {
            continue;
        }
        
        // sqrt(p)보다 작은 분수의 후보 lpc/i가 lesMol/lesDen보다 큰지 비교
        if (lesMol == -1 || lesDen * lpc > lesMol * i)
        {
            lesMol = lpc;
            lesDen = i;
        }
    }

    printf("%d %d\n", greMol, greDen);
    printf("%d %d", lesMol, lesDen);

    return 0;
}