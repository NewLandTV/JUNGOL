#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int CalculateIR(int origin, int ir)
{
    return (int)(origin * (1 + ir * 0.01f));
}

int main(void)
{
    int i;
    int h, y;
    int irs[3] = { 5, 20, 35 };
    int s, t;
    int x = 0;

    scanf("%d %d", &h, &y);

    for (s = h, t = y, i = 0; t > 0; i++)
    {
        if (t >= 3)
        {
            s = CalculateIR(s, irs[1]);
            t -= 3;
        }
        else if (t >= 5)
        {
            s = CalculateIR(s, irs[2]);
            t -= 5;
        }
        else
        {
            s = CalculateIR(s, irs[0]);
            t--;
        }
    }

    for (x = s, s = h, t = y, i = 0; t > 0; i++)
    {
        if (t >= 5)
        {
            s = CalculateIR(s, irs[2]);
            t -= 5;
        }
        else if (t >= 3)
        {
            s = CalculateIR(s, irs[1]);
            t -= 3;
        }
        else
        {
            s = CalculateIR(s, irs[0]);
            t--;
        }
    }

    printf("%d", Max(x, s));

    return 0;
}