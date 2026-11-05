#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101] = { 0, };
    char* ptr;
    
    scanf("%[^\n]s", s);
    
    ptr = strtok(s, " ");
    
    while (1)
    {
        if (strcmp(ptr, "what") == 0)
        {
            printf("quoi ");
        }
        else if (strcmp(ptr, "why") == 0)
        {
            printf("pourquoi ");
        }
        else
        {
            printf("%s ", ptr);
        }
        
        ptr = strtok(NULL, " ");
        
        if (ptr == NULL)
        {
            break;
        }
    }
    
    return 0;
}