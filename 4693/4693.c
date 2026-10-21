#include <stdio.h>

int main(void)
{
    int i;
    int n;
    int x = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        x *= i;
    }

    printf("%d", x);

    return 0;
}