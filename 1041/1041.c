#include <stdio.h>

int main(void)
{
    int i;
    int n, m;
    int no = 1;

    scanf("%d %d", &n, &m);

    for (i = 1; i * i <= m; i++)
    {
        if (n <= i * i)
        {
            no = 0;

            printf("%d ", i * i);
        }
    }

    if (no)
    {
        printf("0");
    }

    return 0;
}