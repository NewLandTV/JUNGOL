#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    int l, r;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    l = a * d;
    r = b * c;

    if (l == r)
    {
        printf("0");
    }
    else
    {
        printf("%d", l > r ? 1 : -1);
    }

    return 0;
}