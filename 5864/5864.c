#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
    int i;
    int n;
    char s[100001];
    int x = 0;

    scanf("%d", &n);
    scanf("%s", s);

    for (i = 0; i < n; i++)
    {
        if (s[i] == 'X')
        {
            x++;
        }
    }

    printf("%d", Min(x, n - x));

    return 0;
}