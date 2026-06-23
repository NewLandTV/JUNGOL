#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int GetMaxLength(char* s)
{
    int i;
    int c = 0, max = 0;

    for (i = 1; i < 9; i++)
    {
        if (s[i - 1] == s[i])
        {
            c++;
        }
        else
        {
            max = Max(c + 1, max);
            c = 0;
        }
    }

    return max;
}

int main(void)
{
    char a[10];
    char b[10];
    char c[10];

    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);
    printf("%d\n", GetMaxLength(a));
    printf("%d\n", GetMaxLength(b));
    printf("%d", GetMaxLength(c));

    return 0;
}