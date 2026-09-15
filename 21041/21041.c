#include <stdio.h>

int main(void)
{
    int i;
    char s[5];
    int t[4] = { 0, }, p[4] = { 1, 2, 4, 8 };
    int score = 0;

    scanf("%s", s);

    for (i = 0; i < 4; i++)
    {
        switch (s[i])
        {
        case 'A':
            t[0] = 1;
            
            break;
        case 'G':
            t[1] = 1;
            
            break;
        case 'C':
            t[2] = 1;
            
            break;
        case 'U':
            t[3] = 1;
            
            break;
        }
    }

    for (i = 0; i < 4; i++)
    {
        score += t[i] ? p[i] : 0;
    }

    printf("%d", score);

    return 0;
}