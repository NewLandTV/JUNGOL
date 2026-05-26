#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char s[11];
    int n;
    char k[101];
    char* ptr;

    scanf("%s", s);
    scanf("%d", &n);

    while (n--)
    {
        scanf(" %[^\n]s", k);

        ptr = strtok(k, " ");

        while (ptr)
        {
            if (strcmp(s, ptr) != 0)
            {
                printf("%s ", ptr);

                ptr = strtok(NULL, " ");

                continue;
            }
            
            for (i = 0; i < strlen(s); i++)
            {
                printf("*");
            }

            printf(" ");

            ptr = strtok(NULL, " ");
        }

        printf("\n");
    }

    return 0;
}