#include <stdio.h>

#define MAX 200000

int main(void)
{
    int i;
    int n;
    int a;
    int x[MAX] = { 0, };

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);

        x[a - 1]++;
    }

    for (i = 0; i < MAX - 6; i++)
    {
        if (x[i] && x[i + 3] && x[i + 6])
        {
            printf("Yes");

            return 0;
        }
    }

    printf("No");

    return 0;
}