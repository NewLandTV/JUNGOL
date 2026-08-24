#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int main(void)
{
    int i;
    int n[5];
    int sum = 0;
    
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);

        sum += n[i];
    }

    printf("%d\n", sum / 5);
    qsort(n, 5, sizeof(int), Compare);
    printf("%d", n[2]);

    return 0;
}