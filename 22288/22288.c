#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    char s[5];
    int count = 0;

    scanf("%s", s);

    for (i = 0; i < 4; i++)
    {
        if (s[i] == '.')
        {
            count++;
        }
    }

    printf("%lf", pow(10, -count));

    return 0;
}