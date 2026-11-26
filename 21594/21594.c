#include <stdio.h>

int main(void)
{
    int d, m, v;

    scanf("%d %d %d", &d, &m, &v);
    printf("%s", d < (60 - m) * v ? "run" : "late");

    return 0;
}