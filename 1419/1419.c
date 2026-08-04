#include <stdio.h>

unsigned int ReverseEndian(unsigned int n)
{
    return (n >> 24) & 0x000000ff | (n >> 8) & 0x0000ff00 | (n << 8) & 0x00ff0000 | (n << 24) & 0xff000000;
}

int main(void)
{
    unsigned int n;

    scanf("%u", &n);
    printf("%u", ReverseEndian(n));

    return 0;
}