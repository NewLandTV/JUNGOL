#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))
#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int a, b;
    int c, d;
    int l, r;

    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    if (b < c || a > d)
    {
        l = a - b;
        r = d - c;
    }
    else
    {
        l = Min(a, c);
        r = Max(b, d);
    }

    printf("%d", r - l);

    return 0;
}