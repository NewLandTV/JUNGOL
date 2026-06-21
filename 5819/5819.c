#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j;
    char s[51];
    int numAlphabet[26] = { 0, };   // 문자열에서 각 알파벳의 개수
    int numOdd = 0; // 개수가 홀수인 문자의 개수
    char oddChar;   // 개수가 홀수인 문자

    scanf("%s", s);

    for (i = 0; i < strlen(s); i++)
    {
        numAlphabet[s[i] - 'A']++;
    }

    for (i = 0; i < 26; i++)
	{
		if (numAlphabet[i] == 0)
		{
			continue;
		}
		
		if (numAlphabet[i] & 1)
		{
			numOdd++;
			oddChar = 'A' + i;
		}
	}
    
    // 회문을 만들 수 없는 경우: 개수가 홀수인 문자가 하나가 아니면 대칭할 수 없다.
	if (numOdd > 1)
	{
		printf("ERROR");
		
		return 0;
	}
    
    // 대칭 문자 기준 왼쪽 문자열 출력
	for (i = 0; i < 26; i++)
	{
		for (j = 0; j < numAlphabet[i] >> 1; j++)
		{
			printf("%c", 'A' + i);
		}
	}
    
    // 개수가 홀수인 문자가 있다면 대칭 문자 출력
	if (numOdd & 1)
	{
		printf("%c", oddChar);
	}
    
    // 대칭 문자 기준 오른쪽 문자열 출력
	for (i = 25; i >= 0; i--)
	{
		for (j = 0; j < numAlphabet[i] >> 1; j++)
		{
			printf("%c", 'A' + i);
		}
	}

    return 0;
}