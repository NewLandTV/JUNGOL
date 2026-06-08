#include <stdio.h>

int main(void)
{
    int i;
    int n, k;
    int a[100000];
    int l = 1, count = 0;

    scanf("%d %d", &n, &k);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++)
    {
        if (a[i - 1] == a[i])
        {
            l++;
        }
        else
        {
            count += (l + k - 1) / k;
            l = 1;
        }
    }

    count += (l + k - 1) / k;

    printf("%d", count);

    return 0;
}