#include <stdio.h>

void Sort(int* a, int n)
{
    int i, j;
    int temp;

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
    }
}

int main(void)
{
    int i;
    int n;
    int a[3];
    int s[7];
    int l = 0, r;   // l: 합의 개수, r: 조건을 만족하는 k가 있는가? (특정 k가 s에 포함되면 1)
    int k;

    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        s[l++] = a[i];
    }
    
    if (n >= 2)
    {
        s[l++] = a[0] + a[1];

        if (n >= 3)
        {
            s[l++] = a[0] + a[2];
            s[l++] = a[1] + a[2];
            s[l++] = a[0] + a[1] + a[2];
        }
    }

    Sort(s, l);
    
    for (k = 1; k < 302; k++)
    {
        for (i = 0, r = 1; i < l; i++)
        {
            if (k == s[i])
            {
                r = 0;

                break;
            }
        }

        if (r != 0)
        {
            printf("%d", k);

            return 0;
        }
    }

    return 0;
}