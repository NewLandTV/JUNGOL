#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
    int i;
    int n;
    long long x[10000] = { 0, }, y[10000] = { 0, };
    long long s1 = 0, s2 = 0;
    double area;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%lld %lld", &x[i], &y[i]);
    }
    
    for (i = 1; i <= n; i++)
    {
        s1 += x[i - 1] * y[i % n];
        s2 += x[i % n] * y[i - 1];
    }
    
    area = Abs(s1 - s2) * 0.5;
    
    printf("%.1lf", area);
    
    return 0;
}