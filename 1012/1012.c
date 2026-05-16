#include <stdio.h>

int main(void)
{
    int i;
    int t, n;
    char team[11];
    int scores[200];
    int sum = 0;

    scanf("%d %d", &t, &n);

    for (i = 0; i < t; i++)
    {
        scanf("%s %d", team, &scores[i]);
        
        sum += scores[i];
    }

    // T: 경기 횟수, W: 이긴 횟수, D: 비긴 횟수, S: 점수 총합
    // 3T = 3W + 3D
    // S = 3W + 2D
    // 3T - S = D (연립)
    
    printf("%d", n * 3 - sum);

    return 0;
}