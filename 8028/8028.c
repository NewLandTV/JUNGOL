#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char s[8];
    int count = 0;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%s", s);

        if (strcmp(s, "merci") == 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}