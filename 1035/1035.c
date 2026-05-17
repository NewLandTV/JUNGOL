#include <stdio.h>

int main(void)
{
    int i;
    int a[9];
    int max = 0, idx;
    
    for (i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);

        if (max < a[i])
        {
            max = a[i];
            idx = i;
        }
    }

    printf("%d\n", max);
    printf("%d", idx + 1);

    return 0;
}