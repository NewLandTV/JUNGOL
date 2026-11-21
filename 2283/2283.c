#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
    int i;
    int n;
    int r[100], g[100], b[100];
    int dpR[100], dpG[100], dpB[100];   // 각각 r, g, b로 색칠할 때의 비용
    int cst = 0;    // 최소 비용

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &r[i], &g[i], &b[i]);
    }

    dpR[0] = r[0];
    dpG[0] = g[0];
    dpB[0] = b[0];

    for (i = 1; i < n; i++)
    {
        dpR[i] = Min(dpG[i - 1], dpB[i - 1]) + r[i];
        dpG[i] = Min(dpR[i - 1], dpB[i - 1]) + g[i];
        dpB[i] = Min(dpR[i - 1], dpG[i - 1]) + b[i];
    }

    cst = Min(dpR[n - 1], Min(dpG[n - 1], dpB[n - 1]));
    
    printf("%d", cst);

    return 0;
}