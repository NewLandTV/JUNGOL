#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int main(void)
{
    int i;
    int n;
    int a[100];
    int temp;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), Compare);

    for (i = temp = 0; i < n; i++)
    {
        if (a[i] == temp)
        {
            continue;
        }

        printf("%d ", a[i]);

        temp = a[i];
    }

    return 0;
}