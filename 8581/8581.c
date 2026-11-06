#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int main(void)
{
    int i;
    int n;
    long long a[100000], b[100000];
    long long result = 0;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    
    qsort(a, n, sizeof(long long), Compare);
    
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &b[i]);
    }
    
    qsort(b, n, sizeof(long long), Compare);
    
    for (i = 0; i < n; i++)
    {
        result += a[i] * b[i];
    }
    
    printf("%lld", result);
    
    return 0;
}