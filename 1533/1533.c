#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d %d", (a + b) >> 1, a - (a + b >> 1));

    return 0;
}