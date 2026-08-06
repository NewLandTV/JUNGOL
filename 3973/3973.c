#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
    int i, j, k;
    int n, bb;
    int x[100], y[100];
    int a, b;
    int dx, dy;
    int quads[4];
    int qm, m;

    scanf("%d %d", &n, &bb);

    m = n;

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    for (i = 0; i < n; i++)
    {
        a = x[i] - 1;   // x = a 방정식

        for (j = 0; j < n; j++)
        {
            b = y[j] - 1;   // y = b 방정식
            
            // 사분면 초기화
            for (k = 0; k < 4; k++)
            {
                quads[k] = 0;
            }
            
            for (k = 0; k < n; k++)
            {
                dx = x[k] - a;
                dy = y[k] - b;

                if (dx > 0 && dy > 0)   // 제1사분면
                {
                    quads[0]++;
                }
                else if (dx < 0 && dy > 0)  // 제2사분면
                {
                    quads[1]++;
                }
                else if (dx < 0 && dy < 0)  // 제3사분면
                {
                    quads[2]++;
                }
                else if (dx > 0 && dy < 0)  // 제4사분면
                {
                    quads[3]++;
                }
            }

            for (k = qm = 0; k < 4; k++)
            {
                qm = Max(qm, quads[k]);
            }

            m = Min(m, qm);
        }
    }
    
    printf("%d", m);

    return 0;
}