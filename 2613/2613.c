#include <stdio.h>

typedef struct
{
	int x, y, d;
} Coord;

int m, n;
int tomatos[1000][1000];
Coord queue[1000000];
int front, rear;
int cnt, target;

void Enqueue(Coord v)
{
    queue[rear++] = v;
}

Coord Dequeue()
{
    return queue[front++];
}

int IsEmpty()
{
    return front == rear;
}

int BFS()
{
	int day = 0;
	Coord c, t;
	
	while (!IsEmpty())
	{
		c = Dequeue();
		
		if (c.x > 0 && !tomatos[c.y][c.x - 1])
        {
        	t.x = c.x - 1;
            t.y = c.y;
            t.d = day = c.d + 1;
            tomatos[t.y][t.x] = 1;
            cnt++;
            
            Enqueue(t);
        }
        if (c.x < m - 1 && !tomatos[c.y][c.x + 1])
        {
        	t.x = c.x + 1;
            t.y = c.y;
            t.d = day = c.d + 1;
            tomatos[t.y][t.x] = 1;
            cnt++;
            
            Enqueue(t);
        }
        if (c.y > 0 && !tomatos[c.y - 1][c.x])
        {
        	t.x = c.x;
            t.y = c.y - 1;
            t.d = day = c.d + 1;
            tomatos[t.y][t.x] = 1;
            cnt++;
            
            Enqueue(t);
        }
        if (c.y < n - 1 && !tomatos[c.y + 1][c.x])
        {
            t.x = c.x;
            t.y = c.y + 1;
            t.d = day = c.d + 1;
            tomatos[t.y][t.x] = 1;
            cnt++;
            
            Enqueue(t);
        }
	}
	
	return cnt == target ? day : -1;
}

int main(void)
{
	int i, j;
	Coord c = { 0, };
	
	scanf("%d %d", &m, &n);

    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            scanf("%d", &tomatos[j][i]);
            
            if (tomatos[j][i] != -1)
            {
                target++;
            }
            if (tomatos[j][i] != 1)
            {
                continue;
            }
            
            c.x = i;
            c.y = j;
            cnt++;
            
            Enqueue(c);
        }
    }

	printf("%d", BFS());
	
	return 0;
}