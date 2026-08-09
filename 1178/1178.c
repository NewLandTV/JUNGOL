#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    int a, b;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d", &a, &b);
        printf("%d %d\n", a * b, (int)log10(a * b) + 1);
    }

    return 0;
}