#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    int n;
    int no = 1;

    scanf("%d", &n);

    for (i = 100; i <= n && i < 1000; i++)
    {
        if (pow(i % 10, 3) + pow(i % 100 / 10, 3) + pow(i / 100, 3) == i)
        {
            no = 0;
            
            printf("%d\n", i);
        }
    }

    if (no)
    {
        printf("0");
    }

    return 0;
}