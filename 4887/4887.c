#include <stdio.h>
#include <stdlib.h>

#define DATA_LENGTH 5

typedef struct
{
    int value;
    int index;
} Data;

int Compare(const void* a, const void* b)
{
    return ((Data*)b)->value - ((Data*)a)->value;
}

int main(void)
{
    int i;
    Data m[DATA_LENGTH], s[DATA_LENGTH], a[DATA_LENGTH];
    int n;
    
    for (i = 0; i < DATA_LENGTH; i++)
    {
        scanf("%d %d", &m[i].value, &s[i].value);

        a[i].value = m[i].value + s[i].value;
        m[i].index = s[i].index = a[i].index = i + 1;
    }

    scanf("%d", &n);

    switch (n)
    {
    case 1:
        qsort(m, DATA_LENGTH, sizeof(Data), Compare);

        for (i = 0; i < DATA_LENGTH; i++)
        {
            printf("%d ", m[i].index);
        }
        
        break;
    case 2:
        qsort(s, DATA_LENGTH, sizeof(Data), Compare);
        
        for (i = 0; i < DATA_LENGTH; i++)
        {
            printf("%d ", s[i].index);
        }
        
        break;
    case 3:
        qsort(a, DATA_LENGTH, sizeof(Data), Compare);
        
        for (i = 0; i < DATA_LENGTH; i++)
        {
            printf("%d ", a[i].index);
        }
        
        break;
    }

    return 0;
}