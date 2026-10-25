#include <stdio.h>

int main(void)
{
    int i;
    float r;
    float sum = 0;

    for (i = 0; i < 12; i++)
    {
        scanf("%f", &r);

        sum += r;
    }

    printf("%.2f", sum / 12);

    return 0;
}