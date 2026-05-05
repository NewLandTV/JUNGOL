#include <stdio.h>

int main(void)
{
    int i;
    int n;
    int a[40];
    int m;
    int s1 = 0, s2 = 0;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &m);
    
    for (i = 0; i < n; i++)
    {
        if (m % a[i] == 0)
        {
            s1 += a[i];
        }
        if (a[i] % m == 0)
        {
            s2 += a[i];
        }
    }
    
    printf("%d\n", s1);
    printf("%d", s2);
    
	return 0;
}