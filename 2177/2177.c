#include <stdio.h>
#include <math.h>

int main(void)
{
    long long i;
    int n;
    int count = 0;

    scanf("%d", &n);
    
    for (i = 1; i <= sqrt(n); i++)
    {
        if (n % i != 0)
        {
            continue;
        }

        if (i & 1)
        {
            count++;
        }
        
        if ((n / i) != i && (n / i) & 1)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}