#include <stdio.h>
#include <string.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int i;
    char a[11], b[11];
    char temp[11];
    int la, lb, l;
    int n = 0;

    scanf("%s %s", a, b);

    la = strlen(a);
    lb = strlen(b);

    if (la < lb)
    {
        for (i = 0; i < lb - la; i++)
        {
            temp[i] = '0';
        }

        for (i = lb - la; i < lb; i++)
        {
            temp[i] = a[i - (lb - la)];
        }

        strcpy(a, temp);
    }
    else
    {
        for (i = 0; i < la - lb; i++)
        {
            temp[i] = '0';
        }

        for (i = la - lb; i < la; i++)
        {
            temp[i] = b[i - (la - lb)];
        }

        strcpy(b, temp);
    }

    l = Max(la, lb);

    for (i = l - 1; i >= 0; i--)
    {
        if (a[i] + b[i] - '0' * 2 < 10)
        {
            continue;
        }

        n++;

        if (i == 0)
        {
            continue;
        }

        if (a[i - 1] >= '0')
        {
            a[i - 1]++;
        }
        else
        {
            b[i - 1]++;
        }
    }

    if (n == 0)
    {
        printf("No carry operation.");
    }
    else if (n == 1)
    {
        printf("1 carry operation.");
    }
    else
    {
        printf("%d carry operations.", n);
    }

    return 0;
}