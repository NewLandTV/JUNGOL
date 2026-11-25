#include <stdio.h>

int main(void)
{
    int n, k;

    scanf("%d %d", &n, &k);
    printf("%d", n < k ? n * 2 : n + k);

    return 0;
}