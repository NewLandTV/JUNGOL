#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);
    printf("%d", m * (n + n * m) >> 1);

    return 0;
}