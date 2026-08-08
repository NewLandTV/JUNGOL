#include <stdio.h>

#define ll long long

int main(void)
{
    int i;
    int n;
    ll l[80];

    scanf("%d", &n);

    l[0] = 4;
    l[1] = 6;

    for (i = 2; i < n; i++)
    {
        l[i] = l[i - 2] + l[i - 1];
    }

    printf("%lld", l[n - 1]);

    return 0;
}