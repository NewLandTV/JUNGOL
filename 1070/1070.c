#include <stdio.h>

int main(void)
{
    int i, j;
    char x[5], y[5];
    int a = 0, b = 0;

    scanf("%s %s", x, y);

    for (i = 0; i < 4; i++)
    {
        if (x[i] == y[i])
        {
            a++;

            continue;
        }
        
        for (j = 0; j < 4; j++)
        {
            if (x[j] == y[i])
            {
                b++;

                break;
            }
        }
    }

    printf("%dA%dB", a, b);

    return 0;
}