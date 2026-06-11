#include <stdio.h>

int main(void)
{
    int h, s;   // h: 우물의 높이, s: 하루에 올라갈 수 있는 높이
    int d;  // d: 걸린 날짜
    float x;    // x: 현재 높이
    
    while (1)
    {
        scanf("%d %d", &h, &s);
        
        if (h == 0 && s == 0)
        {
            break;
        }
        
        for (x = 0.0f, d = 1; d <= 365; d++)
        {
            x += s;

            if (x >= h)
            {
                printf("%d일\n", d);

                break;
            }

            x -= x * 0.2f;
        }

        if (x < h)
        {
            printf("평생 살아라\n");
        }
    }

    return 0;
}