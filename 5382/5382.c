#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j, k;
    int n;
    char s[101];
    int has;

    scanf("%d", &n);
    scanf("%s", s);
    
    for (i = 1; i <= n; i++)
    {
        for (j = has = 0; j <= n - i; j++)
        {
            for (k = j + 1; k <= n - i; k++)
            {
                if (strncmp(&s[j], &s[k], i) == 0)
                {
                    has = 1;

                    break;
                }
            }

            if (has)
            {
                break;
            }
        }
        
        if (!has)
        {
            printf("%d", i);

            return 0;
        }
    }

    return 0;
}