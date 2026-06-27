#include <stdio.h>

int GCD(int a, int b)
{
    int temp;

    while (b > 0)
    {
        temp = a;
        a = b;
        b = temp % b;
    }

    return a;
}

int main(void)
{
    int w, h;
    int x;

    scanf("%d %d", &w, &h);
    
    x = GCD(w, h);

    printf("%d", (w / x) * (h / x));

    return 0;
}