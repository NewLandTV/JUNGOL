#include <stdio.h>

int main(void)
{
    int i;
    int n;
    int a;
    int b;
    int count = 0;

    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);

    for (i = 1; i <= n; i++)
    {
        if ((i % a == 0 && i % b != 0) || (i % a != 0 && i % b == 0))
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}