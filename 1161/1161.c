#include <stdio.h>

void Hanoi(int n, int start, int mid, int end)
{
    if (n == 1)
    {
        printf("%d : %d -> %d\n", n, start, end);

        return;
    }
    
    Hanoi(n - 1, start, end, mid);
    printf("%d : %d -> %d\n", n, start, end);
    Hanoi(n - 1, mid, start, end);
}

int main(void)
{
    int n;

    scanf("%d", &n);
    Hanoi(n, 1, 2, 3);

    return 0;
}