#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);
    
    if (n % 4 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("%s", n & 1 ? "Either" : "Odd");
    }

    return 0;
}