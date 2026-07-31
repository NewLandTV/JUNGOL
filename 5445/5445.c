#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    int n;
    int c[100000];
    int sum = 0, mean, mod;
    int x = 0, r = 0, k;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &c[i]);

        sum += c[i];
    }

    mean = (int)((float)sum / n);
    mod = sum % n;

    for (i = 0; i < n; i++)
    {
        if (c[i] > mean)
        {
            x += c[i] - mean;
            r++;
        }
    }

    k = x - mod;

    if (r < mod)
    {
        k = x - r;
    }

    printf("%d", k);

    return 0;
}