#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Max3(a, b, c) (Max(Max((a), (b)), (c)))

int main(void)
{
    int i, j, k;
    int n;
    int l[50];
    int x, y, z;
    int max = 0;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &l[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                x = l[i];
                y = l[j];
                z = l[k];

                if (Max3(x, y, z) < x + y + z - Max3(x, y, z))
                {
                    max = Max(x + y + z, max);
                }
            }
        }
    }

    printf("%d", max);

    return 0;
}