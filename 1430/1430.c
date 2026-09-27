#include <stdio.h>

int main(void)
{
    int i;
    int a, b, c;
    int result;
    int count[10] = { 0, };

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    result = a * b * c;

    while (result > 0)
    {
        count[result % 10]++;
        result /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}