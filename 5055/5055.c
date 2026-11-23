#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101];
    
    scanf("%s", s);
    printf("%c%c", s[strlen(s) - 1], s[strlen(s) - 1]);

    return 0;
}