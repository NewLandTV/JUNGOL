#include <iostream>

using namespace std;

int main()
{
    int n;
    long long res[2] = { 0, }, cnt[2] = { 0, };
    
    cin >> n;

    while (n--)
    {
        int a;

        cin >> a;
        cnt[a & 1]++;
        res[a & 1] += cnt[(a + 1) & 1];
    }
    
    cout << min(res[0], res[1]);

    return 0;
}