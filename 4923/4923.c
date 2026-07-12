#include <stdio.h>

int Work(int n, int m, int b, int h, int g[][500])
{
	int i, j;
	int up = 0, down = 0;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (g[i][j] > h)
			{
				up += g[i][j] - h;
			}
			else if (g[i][j] < h)
			{
				down += h - g[i][j];
			}
		}
	}
	
	return down - up > b ? -1 : up * 2 + down;
}

int main(void)
{
	int i, j;
    int n, m, b;
    int g[500][500] = { 0, };
	int prev, cur;
	int t = 0, minHeight = 256;
	
	scanf("%d %d %d", &n, &m, &b);
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &g[i][j]);
			
			if (minHeight > g[i][j])
			{
				minHeight = g[i][j];
			}
		}
	}
	
	for (;; minHeight--)
	{
		prev = Work(n, m, b, minHeight, g);
		
		if (prev == -1)
		{
			continue;
		}
		
		for (cur = 0;;)
		{
			cur = Work(n, m, b, minHeight + 1, g);
			
			if (cur != -1 && cur <= prev)
			{
				minHeight++;
				prev = cur;
			}
			else
			{
				break;
			}
		}
		
		break;
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (g[i][j] > minHeight)
			{
				t += (g[i][j] - minHeight) * 2;
				b++;
			}
			else if (g[i][j] < minHeight)
			{
				t += minHeight - g[i][j];
			}
		}
	}
	
	printf("%d %d", t, minHeight);
	
	return 0;
}