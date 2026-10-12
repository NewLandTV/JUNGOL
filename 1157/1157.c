#include <stdio.h>

int main(void)
{
    int i, j, k;
    int n;
    int a[100];
    int temp;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] <= a[j + 1])
            {
                continue;
            }

            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }

        for (k = 0; k < n; k++)
        {
            printf("%d ", a[k]);
        }

        printf("\n");
    }
    
    return 0;
}