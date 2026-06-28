#include <stdio.h>

int main(void)
{
    int i;
    int n;
    int a[250000];
    int x = 1;  // 지울 카드의 숫자
    int count = 0;  // 지워야 할 카드의 개수

    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] != x)
        {
            count++;
        }
        else
        {
            x++;
        }
    }

    printf("%d", count);

    return 0;
}