#include <stdio.h>

int main(void)
{
    int number, leg;
    int puppy, chick;
    
    while (1)
    {
        scanf("%d %d", &number, &leg);

        if (number == 0 && leg == 0)
        {
            break;
        }

        if (number > 1000 || leg > 4000)
        {
            printf("INPUT ERROR!\n");

            continue;
        }

        puppy = (leg - number * 2) / 2;
        chick = number - puppy;

        if (puppy >= 0 && chick >= 0 && puppy * 4 + chick * 2 == leg)
        {
            printf("%d %d\n", puppy, chick);
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}