#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    int n;
    int p[100];
    int sum = 0;
    float m, t = 0.0f, s;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);

        sum += p[i];
    }
    
    m = (float)sum / n;

    for (i = 0; i < n; i++)
    {
        t += pow(p[i] - m, 2) / n;
    }

    s = sqrt(t);

    printf("%d\n", sum);
    printf("%g\n", round(m * 10) / 10);
    printf("%g", round(s * 10) / 10);

    return 0;
}