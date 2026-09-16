#include <stdio.h>
#include <string.h>

int IsUpper(char c)
{
    return c >= 'A' && c <= 'Z';
}

int main(void)
{
    int i;
    int n;
    char s[301];
    int c = 0;

    scanf("%d", &n);

    while (n--)
    {
        scanf(" %[^\n]s", s);

        for (i = 0; i < strlen(s); i++)
        {
            if (IsUpper(s[i]))
            {
                c++;
            }
        }
    }

    printf("%d", c);

    return 0;
}