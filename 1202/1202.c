#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char s[81];

    scanf("%s", s);
    
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] != '%')
        {
            printf("%c", s[i]);

            continue;
        }

        switch (s[i + 2])
        {
        case '0':
            printf(" ");

            break;
        case '1':
            printf("!");

            break;
        case '4':
            printf("$");

            break;
        case '5':
            printf("%%");

            break;
        case '8':
            printf("(");

            break;
        case '9':
            printf(")");

            break;
        case 'a':
            printf("*");

            break;
        }

        i += 2;
    }

    return 0;
}