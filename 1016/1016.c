#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
    int i, j;
    int n;
    int a[1000];
    int c1 = 0, c2 = 0; // 구간 1의 길이와 구간 2의 길이입니다.
    int w12 = 0, w13 = 0, w21 = 0, w23 = 0, w31 = 0, w32 = 0;   // 각각 1번 구간에 2가 몇 개 잘못 들어갔는지, 1번 구간에 3이 몇 개 잘못 들어갔는지 ... 을 저장하는 변수입니다.
    int p12, p13, p23;  // 구간 1과 2, 구간 1과 3, 구간 2와 3 사이의 최솟값입니다.
    int count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] == 1)
        {
            c1++;
        }
        else if (a[i] == 2)
        {
            c2++;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (c1 > i) // 1번 구간
        {
            if (a[i] == 2)
            {
                w12++;
            }
            else if (a[i] == 3)
            {
                w13++;
            }
        }
        else if (c1 + c2 > i)   // 2번 구간
        {
            if (a[i] == 1)
            {
                w21++;
            }
            else if (a[i] == 3)
            {
                w23++;
            }
        }
        else    // 3번 구간
        {
            if (a[i] == 1)
            {
                w31++;
            }
            else if (a[i] == 2)
            {
                w32++;
            }
        }
    }
    
    p12 = Min(w12, w21);
    p13 = Min(w13, w31);
    p23 = Min(w23, w32);

    count += p12 + p13 + p23;
    w12 -= p12;
    w13 -= p13;
    
    count += (w12 + w13) * 2;

    printf("%d", count);

    return 0;
}