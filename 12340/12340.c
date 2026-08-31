#include <stdio.h>

int main(void)
{
    int i;
    int n, m;
    int a;
    long long x = 1;

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);

        x = (x * a) % m;
    }

    printf("%lld", x % m);

    return 0;
}