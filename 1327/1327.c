#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int i;
    int n;
    int a[10000];
    int inc = 0, dec = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++)
    {
        if (a[i - 1] < a[i])
        {
            inc++;
        }
        else if (a[i - 1] > a[i])
        {
            dec++;
        }
    }
    
    if (inc == 0)
    {
        printf("DEC");
    }
    else if (dec == 0)
    {
        printf("INC");
    }
    else
    {
        printf("MIX");
    }

    return 0;
}