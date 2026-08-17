#include <stdio.h>

int main(void)
{
    int i;
    int t;
    int hp;
    int dps;
    int s;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &hp);

        for (i = s = 0; i < 10; i++)
        {
            scanf("%d", &dps);

            s += dps;
        }

        printf("%s\n", s * 600 >= hp ? "KILL" : "NO");
    }

    return 0;
}