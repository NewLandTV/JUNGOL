#include <stdio.h>

int main(void)
{
    unsigned int n;
    int s;  // 1이면 Stan이 이기고, 아니면 Ollie가 이긴다.

    scanf("%u", &n);

    for (s = 0; n > 1; s = 1 - s)
    {
        n = (n - 1) / (s ? 2 : 9) + 1;
    }

    printf("%s wins.", s ? "Stan" : "Ollie");
    
    return 0;
}