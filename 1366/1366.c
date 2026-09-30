#include <stdio.h>

int main(void)
{
    int i;
    int n;
    int a;
    int c, sum = 0;

    scanf("%d", &n);

    for (i = c = 0; i < n; i++)
    {
        scanf("%d", &a);

        if (a == 0)
        {
            c = 0;

            continue;
        }
        
        sum += ++c;
    }

    printf("%d", sum);

    return 0;
}