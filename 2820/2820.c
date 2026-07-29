#include <stdio.h>

int main(void)
{
    int i;
    int n;
    char s[100001];
    long long c = 0, o = 0, w = 0;

    scanf("%d", &n);
    scanf("%s", s);

    for (i = 0; i < n; i++)
    {
        switch (s[i])
        {
        case 'C':
            c++;
            
            break;
        case 'O':
            o += c;
            
            break;
        case 'W':
            w += o;
            
            break;
        }
    }

    printf("%lld", w);

    return 0;
}