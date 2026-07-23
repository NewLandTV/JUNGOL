#include <stdio.h>

#define LENGTH 11
#define MAX 55001

int a[LENGTH] = { 0, };
int v[MAX] = { 0, };

void Check(int index, int sum)
{
    if (index == LENGTH)
    {
        v[sum] = 1;

        return;
    }

    Check(index + 1, sum + a[index]);
    Check(index + 1, sum);
}

int main(void)
{
    int i;

    for (i = 0; i < LENGTH; i++)
    {
        scanf("%d", &a[i]);
    }
    
    Check(0, 0);

    for (i = 0; i < MAX; i++)
    {
        if (!v[i])
        {
            printf("%d", i);

            return 0;
        }
    }

    return 0;
}