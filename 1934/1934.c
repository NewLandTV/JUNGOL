#include <stdio.h>

int main(void)
{
    int n;
    int t;
    int low, high, mid;

    scanf("%d", &n);

    low = 1;
    high = n;
    t = n;

    while (low <= high)
    {
        mid = low + ((high - low) >> 1);
        
        if (mid + mid / 3 + mid / 4 >= n)
        {
            t = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("%d", t);

    return 0;
}