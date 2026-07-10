#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int n;
    char s[1001];
    char* ptr;
    int sum = 0;

    scanf("%d", &n);
    scanf("%s", s);

    ptr = strtok(s, ".|:#");

    while (ptr != NULL)
    {
        sum += atoi(ptr);
        ptr = strtok(NULL, ".|:#");
    }

    printf("%d", sum);

    return 0;
}