#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int n, k;
    char s[20001];
    int count = 0;

    cin >> n >> k;
    cin >> s;
    
    for (i = 0; i < n; i++)
    {
        if (s[i] != 'P')
        {
            continue;
        }

        for (j = k; j + k >= 0; j--)
        {
            if (i < j || i - j >= n || s[i - j] != 'H')
            {
                continue;
            }

            s[i - j] = ' ';
            count++;

            break;
        }
    }

    cout << count;

    return 0;
}