#include <stdio.h>

int main(void)
{
    char x[3];
    char y[3];
    char z[3];
    char a, b, c, d;
    int cor1, cor2, cor3;
    char corRank[3];
    int answerCnt = 0, t = 0;

    scanf(" %c %c %c", &x[0], &x[1], &x[2]);
    scanf(" %c %c %c", &y[0], &y[1], &y[2]);
    scanf(" %c %c %c", &z[0], &z[1], &z[2]);
    
    for (a = 'A'; a <= 'D'; a++)
    {
        for (b = 'A'; b <= 'D'; b++)
        {
            if (a == b)
            {
                continue;
            }

            for (c = 'A'; c <= 'D'; c++)
            {
                if (a == c || b == c)
                {
                    continue;
                }

                for (d = 'A'; d <= 'D'; d++)
                {
                    if (a == d || b == d || c == d)
                    {
                        continue;
                    }

                    corRank[0] = corRank[1] = corRank[2] = cor1 = cor2 = cor3 = 0;
                    
                    if (x[0] == a)
                    {
                        cor1++;
                        corRank[0]++;
                    }
                    if (x[1] == b)
                    {
                        cor1++;
                        corRank[1]++;
                    }
                    if (x[2] == c)
                    {
                        cor1++;
                        corRank[2]++;
                    }

                    if (y[0] == a)
                    {
                        cor2++;
                        corRank[0]++;
                    }
                    if (y[1] == b)
                    {
                        cor2++;
                        corRank[1]++;
                    }
                    if (y[2] == c)
                    {
                        cor2++;
                        corRank[2]++;
                    }

                    if (z[0] == a)
                    {
                        cor3++;
                        corRank[0]++;
                    }
                    if (z[1] == b)
                    {
                        cor3++;
                        corRank[1]++;
                    }
                    if (z[2] == c)
                    {
                        cor3++;
                        corRank[2]++;
                    }
                    
                    if (cor1 != 1 || cor2 != 1 || cor3 != 1 || corRank[0] != 1 || corRank[1] != 1 || corRank[2] != 1)
                    {
                        continue;
                    }

                    answerCnt++;
                    t = b - 'A' + 1;
                }
            }
        }
    }

    printf("%d", answerCnt == 1 ? t : 5);

    return 0;
}