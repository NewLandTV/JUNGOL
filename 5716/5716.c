#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int main(void)
{
    int n[3];
    int d1, d2;

    scanf("%d %d %d", &n[0], &n[1], &n[2]);
    qsort(n, 3, sizeof(int), Compare);

    d1 = n[1] - n[0];
    d2 = n[2] - n[1];

    if (d1 == d2)
    {
        printf("%d", n[2] + d1);
    }
    else if (d1 == d2 * 2)
    {
        printf("%d", n[0] + d2);
    }
    else if (d1 * 2 == d2)
    {
        printf("%d", n[1] + d1);
    }

    return 0;
}