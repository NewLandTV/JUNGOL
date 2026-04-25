#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int k, n, m;

    scanf("%d %d %d", &k, &n, &m);
    printf("%d", Max(k * n - m, 0));

    return 0;
}