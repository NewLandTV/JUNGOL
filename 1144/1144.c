#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    int x, y;
    char s1[101];

    scanf("%d %d %s", &x, &y, s1);

    for (i = 0; i < strlen(s1); i++)
    {
        switch (s1[i])
        {
        case 'U':
            y++;
            
            break;
        case 'L':
            x--;
            
            break;
        case 'R':
            x++;
            
            break;
        case 'D':
            y--;
            
            break;
        }
    }

    printf("%d %d", x, y);

    return 0;
}