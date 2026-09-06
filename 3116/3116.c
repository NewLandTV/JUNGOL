#include <stdio.h>
#include <string.h>

// 두 변수의 값을 서로 바꾸는 매크로
#define Swap(a, b, type) do \
{ \
    type temp; \
    temp = a; \
    a = b; \
    b = temp; \
} while(0)

// 특정 숫자(예: 1, A, F 등)를 문자로 바꾸는 함수
// 용도: 자릿수 변환
char N2Char(int n)
{
    if (n < 10)
    {
        return n + '0';
    }

    return n + 'A' - 10;
}

// 특정 자릿수(예: 7, E, 등)를 숫자로 바꾸는 함수
// 용도: 숫자 계산
int Char2N(char d)
{
    if (d >= 'A')
    {
        return d - 'A' + 10;
    }

    return d - '0';
}

// 문자열을 거꾸로 뒤집는 함수
// 원리: 양 끝에서 점점 중앙으로 이동하며 좌우를 서로 바꾸기
void StrRev(char* s)
{
    int i = 0;  // 문자열 처음 -> 문자열 중간
    int j = strlen(s) - 1;  // 문자열 끝 -> 문자열 중간

    for (; i < j; i++, j--)
    {
        Swap(s[i], s[j], char);
    }
}

// A진법으로 표현된 N을 B로 나누고, 원래 배열에 몫을 구하고 나머지를 반환하는 함수
int Divide(int a, char* n, int b)
{
    int i, j;
    int digit = 0;  // 나눗셈을 수행할 현재 자릿수의 값
    int quotient;   // 나눗셈의 몫
    int zeroFlag = 0;   // 불필요한 0을 제거하기 위한 변수

    for (i = j = 0; i < strlen(n); i++)
    {
        digit = digit * a + Char2N(n[i]);
        quotient = digit / b;
        digit %= b;

        if (zeroFlag || quotient > 0)
        {
            n[j++] = N2Char(quotient);
            zeroFlag = 1;
        }
    }

    n[j] = 0;

    if (j == 0)
    {
        n[0] = '0';
        n[1] = 0;
    }

    return digit;
}

int main(void)
{
    int i;
    int a, b;
    char n[201];
    char result[1201];

    while (1)
    {
        scanf("%d", &a);

        if (a == 0)
        {
            return 0;
        }

        scanf("%s %d", n, &b);
        
        // N이 0이 될 때까지 계속 B로 나누기
        for (i = 0; strcmp(n, "0") != 0; i++)
        {
            result[i] = N2Char(Divide(a, n, b));
        }

        result[i] = 0;
        
        StrRev(result);
        printf("%s\n", result);
    }

    return 0;
}