#include <stdio.h>

int main(void)
{
    int i;
    int n;
    char s[101];
    int count = 0;

    scanf("%d", &n);
    scanf("%s", s);

    for (i = 0; i < n - 1; i++)
    {
        if (s[i] == 'C' && s[i + 1] >= '0' && s[i + 1] <= '9')
        {
            count++;
        }
    }

    printf("%d", count);
    
    return 0;
}