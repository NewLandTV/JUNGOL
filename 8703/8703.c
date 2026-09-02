#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char name[7];

    while (n--)
    {
        scanf("%s", name);

        if (strcmp(name, "yonsei") == 0)
        {
            printf("Yonsei Won!");

            break;
        }
        else if (strcmp(name, "korea") == 0)
        {
            printf("Yonsei Lost...");

            break;
        }
    }
    
    return 0;
}