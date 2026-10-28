#include <stdio.h>

int main(void)
{
    int h;

    scanf("%d", &h);

    if (h == 1)
    {
        printf("0");

        return 0;
    }
    else if (h == 0)
    {
        printf("1");

        return 0;
    }

    if (h & 1)
    {
        printf("4");

        h--;
    }
    
    for (; h > 0; h -= 2)
    {
        printf("8");
    }

    return 0;
}