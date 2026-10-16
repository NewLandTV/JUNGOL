#include <stdio.h>

#define DEFAULT 10000
#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
    int i;
    int a[10];
    int n;
    int x = DEFAULT, y = DEFAULT;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n);

    for (i = 0; i < 10; i++)
    {
        if (n > a[i])
        {
            x = Min(x, n - a[i]);
        }
        else if (n < a[i])
        {
            y = Min(y, a[i] - n);
        }
    }

    printf("%d\n", x == DEFAULT ? n : n - x);
    printf("%d", y == DEFAULT ? n : n + y);

    return 0;
}