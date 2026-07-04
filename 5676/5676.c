#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    int n;
    char s[12], m[10];
    int sum = 0, d, div;
    int positions[3];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", s);

        for (j = k = 0; j < strlen(s); j++)
        {
            if (s[j] != ',')
            {
                m[k++] = s[j];
            }
        }
        
        m[k] = 0;
        sum += atoi(m);
    }

    if (sum == 0)
    {
        printf("0");
        
        return 0;
    }
    
    d = (int)log10(sum) + 1;
    positions[0] = positions[1] = positions[2] = -1;

    switch (d)
    {
    case 4:
        positions[0] = 0;

        break;
    case 5:
        positions[0] = 1;

        break;
    case 6:
        positions[0] = 2;

        break;
    case 7:
        positions[0] = 0;
        positions[1] = 3;

        break;
    case 8:
        positions[0] = 1;
        positions[1] = 4;

        break;
    case 9:
        positions[0] = 2;
        positions[1] = 5;

        break;
    case 10:
        positions[0] = 0;
        positions[1] = 3;
        positions[2] = 6;

        break;
    default:
        break;
    }

    for (i = j = 0; i < d; i++)
    {
        div = pow(10, d - i - 1);

        printf("%d", (int)(sum / div));

        sum %= div;

        if (positions[j] == i)
        {
            j++;

            printf(",");
        }
    }

    return 0;
}