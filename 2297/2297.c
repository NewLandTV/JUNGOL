#include <stdio.h>

int main(void)
{
    int i;
    int n;
    int result;

    scanf("%d", &n);

    for (i = 1, result = 1; i < n; i += result++ * 6);

    printf("%d", result);

    return 0;
}