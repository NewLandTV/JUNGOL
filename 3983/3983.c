#include <stdio.h>

#define SIZE 10002

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int i, j;
    int n, k;
    int a, b[SIZE] = { 0, };
    int s, m = 0;

    scanf("%d %d", &n, &k);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);

        b[a]++;
    }

    for (i = 1, s = 0; i <= k + 1; i++)
    {
        s += b[i];
    }

    m = Max(m, s);
    
    for (i = 1; i < SIZE - k - 1; i++)
    {
        s = s - b[i] + b[i + k + 1];
        m = Max(m, s);
    }

    printf("%d", m);
    
    return 0;
}