#include <stdio.h>

int main(void)
{
    int n;
    int a, b, c;
    int count = 0;

    scanf("%d", &n);
    
    for (a = 1; a <= n; a++)
    {
        for (b = a; b <= n; b++)
        {
            for (c = b; c <= n; c++)
            {
                if (a * a + b * b == c * c)
                {
                    count++;
                }
            }
        }
    }

    printf("%d", count);

    return 0;
}