#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
    int a, b, c;
    int sum, min;

    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    min = Min(Min(a, b), c);

    printf("%d", sum - min);

    return 0;
}