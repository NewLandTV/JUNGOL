#include <iostream>
#include <string>
#include <queue>

using namespace std;

int Max(int x, int y)
{
    return x > y ? x : y;
}

int GetBCAB(string s)
{
    int cnt = 0;
    queue<int> idx;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == 'B' && !idx.empty())
        {
            s[i] = ' ';
            s[idx.front()] = ' ';
            idx.pop();
            cnt++;
        }
        else if (s[i] == 'C')
        {
            idx.push(i);
        }
    }
    
    idx = queue<int>();
    
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == 'A' && !idx.empty())
        {
            s[i] = ' ';
            s[idx.front()] = ' ';
            idx.pop();
            cnt++;
        }
        else if (s[i] == 'B')
        {
            idx.push(i);
        }
    }
    
    return cnt;
}

int GetABBC(string s)
{
    int cnt = 0;
    queue<int> idx;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == 'A' && !idx.empty())
        {
            s[i] = ' ';
            s[idx.front()] = ' ';
            idx.pop();
            cnt++;
        }
        else if (s[i] == 'B')
        {
            idx.push(i);
        }
    }
    
    idx = queue<int>();
    
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == 'B' && !idx.empty())
        {
            s[i] = ' ';
            s[idx.front()] = ' ';
            idx.pop();
            cnt++;
        }
        else if (s[i] == 'C')
        {
            idx.push(i);
        }
    }

    return cnt;
}

int main()
{
    string s;
    
    cin >> s;
    cout << Max(GetABBC(s), GetBCAB(s));
    
    return 0;
}