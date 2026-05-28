#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char s[51];
    int c = 0;

    scanf("%s", s);

    for (i = 0; i < strlen(s); i++)
    {
        switch (s[i])
        {
        case '0':
            c += 6;

            break;
        case '1':
            c += 2;

            break;
        case '2':
        case '3':
        case '5':
            c += 5;

            break;
        case '4':
            c += 4;

            break;
        case '6':
        case '9':
            c += 6;

            break;
        case '7':
            c += 3;

            break;
        case '8':
            c += 7;

            break;
        }
    }

    printf("%d", c);
    
    return 0;
}