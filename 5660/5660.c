#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int main(void)
{
    int i, j, k;
    int n;
    int a[1000];
    int tri[446] = { 0, };
    int m = 0;
    int count = 0;

    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), Compare);
    
    // 삼각수 구하기
    for (tri[0] = 1, i = 1; tri[i - 1] <= a[n - 1]; i++, m++)
    {
        tri[i] = tri[i - 1] + i + 1;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            for (k = j + 1; k < m; k++)
            {
                if (a[i] == tri[j] + tri[k])
                {
                    count++;

                    break;
                }
            }

            if (a[i] == tri[j] + tri[k])
            {
                break;
            }
        }
    }

    printf("%d", count);

    return 0;
}