#include <stdio.h>

int main(void)
{
    int i;
    int n, s;
    int a;  // 1부터 n까지의 합

    scanf("%d %d", &n, &s);

    a = n * (n + 1) >> 1;

    for (i = 1; i <= 10000; i++)
    {
        if (a - i == s)
        {
            printf("%d", i);

            return 0;
        }
    }

    return 0;
}