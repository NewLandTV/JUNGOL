#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[51];
    char* ptr;
    int count = 0;

    scanf("%s", s);

    ptr = strtok(s, "=");

    while (ptr)
    {
        if (strcmp(ptr, "BUS") == 0)
        {
            count++;
        }

        ptr = strtok(NULL, "=");
    }

    printf("%d", count);

    return 0;
}