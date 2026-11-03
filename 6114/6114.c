#include <stdio.h>

int main(void)
{
    int i, j;
    char c;

    scanf("%c", &c);
    
    printf(" ");

    for (i = 0; i < 4; i++)
    {
        printf("%c", c);
    }

    printf(" ");

    for (i = 0; i < 4; i++)
    {
        printf("%c", c);
    }

    printf("\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 11; j++)
        {
            printf("%c", c);
        }

        printf("\n");
    }
    
    printf("  ");

    for (i = 0; i < 7; i++)
    {
        printf("%c", c);
    }

    printf("\n    ");
    
    for (i = 0; i < 3; i++)
    {
        printf("%c", c);
    }

    printf("\n     %c", c);
}