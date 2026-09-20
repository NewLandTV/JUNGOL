#include <stdio.h>

#define MAX 101

// 큐 데이터
typedef struct _Data
{
    int index;
    int priority;
} Data;

int main(void)
{
    int i;
    int n, m;
    Data datas[MAX], current;
    int front, rear, count = 0; // 큐 관련 변수
    int show;   // 프린터 출력 횟수

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        datas[i].index = i;

        scanf("%d", &datas[i].priority);
    }
    
    // 원형 큐 방식으로 구현하여 front와 rear를 조작
    for (front = 0, rear = n; front != rear;)
    {
        current = datas[front];
        front = (front + 1) % MAX;

        for (show = 1, i = front; i != rear; i = (i + 1) % MAX)
        {
            if (datas[i].priority > current.priority)
            {
                show = 0;

                break;
            }
        }

        if (show)
        {
            count++;

            if (current.index == m)
            {
                printf("%d", count);

                return 0;
            }

            continue;
        }

        datas[rear] = current;
        rear = (rear + 1) % MAX;
    }

    return 0;
}