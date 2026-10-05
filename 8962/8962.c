#include <stdio.h>

int main(void)
{
    int x, y, n;

    scanf("%d %d %d", &x, &y, &n);
    printf("%d", n & 1 ? (n - 1) * y + x : n * y);

    return 0;
}