#include <stdio.h>

int main(void)
{
    int i;
    int n;
    int count = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        count += __builtin_popcount(i);
    }

    printf("%d", count);
    
    return 0;
}