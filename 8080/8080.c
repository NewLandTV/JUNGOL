#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;
    int page, s;

    scanf("%d %d", &a, &b);
    
    for (s = 0; a <= b; s++, a++)
    {
        if (a & 1 && a + 1 <= b)
        {
            a++;
        }
    }

    printf("%d", s);

    return 0;
}