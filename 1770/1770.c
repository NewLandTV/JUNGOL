#include <stdio.h>

#define MAX_DATA_LEN 10000

typedef struct
{
    int x, y;
    int value;
    int deleted;
} Data;

Data datas[MAX_DATA_LEN] = { 0, };

void Delete(int x, int y)
{
    int i;

    for (i = 0; i < MAX_DATA_LEN; i++)
    {
        if (!datas[i].deleted && datas[i].x == x && datas[i].y == y)
        {
            datas[i].deleted = 1;

            printf("OK!\n");

            return;
        }
    }

    printf("Error!\n");
}

void Get(int x, int y)
{
    int i;

    for (i = MAX_DATA_LEN - 1; i >= 0; i--)
    {
        if (!datas[i].deleted && datas[i].x == x && datas[i].y == y)
        {
            printf("(%d,%d)->%d\n", x, y, datas[i].value);

            return;
        }
    }

    printf("Error!\n");
}

int main(void)
{
    int c;
    char cmd;
    int i, j, x;
    int length = 0;

    for (i = 0; i < MAX_DATA_LEN; i++)
    {
        datas[i].deleted = 1;
    }

    scanf("%d", &c);

    while (c--)
    {
        scanf(" %c", &cmd);

        switch (cmd)
        {
        case 'S':
            scanf("%d %d %d", &i, &j, &x);

            datas[length].x = i;
            datas[length].y = j;
            datas[length].value = x;
            datas[length++].deleted = 0;

            break;
        case 'D':
            scanf("%d %d", &i, &j);
            Delete(i, j);

            break;
        case 'G':
            scanf("%d %d", &i, &j);
            Get(i, j);

            break;
        }
    }

    return 0;
}