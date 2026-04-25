#include <stdio.h>

int main(void)
{
    int i;
    int n;
    int p[40];

    scanf("%d", &n);

    p[0] = p[1] = 1;

    for (i = 2; i < n; i++)
    {
        p[i] = p[i - 2] + p[i - 1];
    }

    printf("%d", p[n - 1]);
    
    return 0;
}