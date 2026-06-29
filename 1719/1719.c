#include <stdio.h>

void Triangle1(int n)
{
    int i, j;

    for (i = 0; i <= n >> 1; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (i = n >> 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

void Triangle2(int n)
{
    int i, j;

    for (i = 0; i <= n >> 1; i++)
    {
        for (j = 0; j < (n >> 1) - i; j++)
        {
            printf(" ");
        }
        
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (i = n >> 1; i > 0; i--)
    {
        for (j = 0; j <= (n >> 1) - i; j++)
        {
            printf(" ");
        }
        
        for (j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

void Triangle3(int n)
{
    int i, j;

    for (i = 0; i <= n >> 1; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (j = 0; j < n - i * 2; j++)
        {
            printf("*");
        }

        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        printf("\n");
    }

    for (i = (n >> 1) - 1; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (j = 0; j < n - i * 2; j++)
        {
            printf("*");
        }

        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        printf("\n");
    }
}

void Triangle4(int n)
{
    int i, j;

    for (i = 0; i <= n >> 1; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        
        for (j = 0; j <= (n >> 1) - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (i = (n >> 1) - 1; i >= 0; i--)
    {
        for (j = 0; j < n >> 1; j++)
        {
            printf(" ");
        }
        
        for (j = 0; j <= (n >> 1) - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    if (!(n & 1) || m < 1 || m > 4)
    {
        printf("INPUT ERROR!");

        return 0;
    }

    switch (m)
    {
    case 1:
        Triangle1(n);

        break;
    case 2:
        Triangle2(n);

        break;
    case 3:
        Triangle3(n);

        break;
    case 4:
        Triangle4(n);

        break;
    }

    return 0;
}