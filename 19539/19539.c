#include <stdio.h>

int main(void)
{
    int n;
    int k;

    scanf("%d", &n);

    for (k = 1; k <= n + 1; k++)
    {
        if (n % k != 0)
        {
            printf("%d", k);

            return 0;
        }
    }

    return 0;
}