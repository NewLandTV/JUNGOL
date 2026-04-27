#include <stdio.h>

int GCD(int x, int y)
{
    return y ? GCD(y, x % y) : x;
}

int main(void)
{
    int i;
    int n;
    int a[10];
    int gcd, lcm;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    gcd = lcm = a[0];
    
    for (i = 1; i < n; i++)
    {
        gcd = GCD(gcd, a[i]);
        lcm = lcm / GCD(lcm, a[i]) * a[i];
    }

    printf("%d %d", gcd, lcm);

    return 0;
}