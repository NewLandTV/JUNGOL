#include <stdio.h>

int main(void)
{
    int i;
    int n;
    char s[100001];
    int x = 0;

    scanf("%d", &n);
    scanf("%s", s);

    for (i = 1; i < n; i++)
    {
        if (s[i - 1] != s[i])
        {
            x++;
            i++;
        }
    }

    printf("%d", x);

    return 0;
}