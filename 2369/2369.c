#include <stdio.h>

int main(void)
{
    int i, j;
    int n;
    int s1[100000], s2[100000];
    int l;
    int x = 0, s = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &s1[i], &s2[i]);
    }

    for (i = 1; i <= 5; i++)    // 1-5점
    {
        for (j = l = 0; j < n; j++)
        {
            if (s1[j] != i && s2[j] != i)   // 책상의 점수가 일치하는지 검사
            {
                l = 0;

                continue;
            }

            if (++l > x)
            {
                x = l;
                s = i;
            }
        }
    }

    printf("%d %d", x, s);

    return 0;
}