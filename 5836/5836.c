#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))
#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int i;
    int n;
    int a[250000];
    int min = 1000000000, max = 0;
    int x, y;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        
        min = Min(a[i], min);
        max = Max(a[i], max);
    }
    
    for (i = 0; i < n; i++)
    {
        x = max - a[i];
        y = a[i] - min;

        printf("%d\n", Max(x, y));
    }
    
    return 0;
}