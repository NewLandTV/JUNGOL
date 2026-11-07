#include <stdio.h>

int main(void)
{
    int i, j;
    int n, m;
    int a, b;
    int badPair[20] = { 0, };   // 조합이 맞지 않는 피자의 쌍의 수를 비트마스킹
    int possible;
    int answer = 0;

    scanf("%d %d", &n, &m);
    
    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);

        a--;
        b--;

        badPair[a] |= (1 << b);
        badPair[b] |= (1 << a);
    }

    for (i = 0; i < (1 << n); i++)  // 모든 토핑 조합을 검사 (비트마스킹)
    {
        possible = 1;

        for (j = 0; j < n; j++) // 선택한 토핑의 쌍 중 조합이 맞는지 검사
        {
            if (i & (1 << j))
            {
                if (i & badPair[j])
                {
                    possible = 0;

                    break;
                }
            }
        }

        if (possible)
        {
            answer++;
        }
    }

    printf("%d", answer);

    return 0;
}