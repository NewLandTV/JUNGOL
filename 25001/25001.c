#include <stdio.h>

int main(void)
{
    int i;
    int n;
    char s[51];
    int c = 0;

    scanf("%d", &n);
    scanf("%s", s);

    for (i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            c++;
        }
    }

    printf("%d", c);

    return 0;
}