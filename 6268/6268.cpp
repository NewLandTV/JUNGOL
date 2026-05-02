#include <iostream>

using namespace std;

int main()
{
    int n;
    int cycle[6] = { 3, 1, -2, -3, -1, 2 };

    cin >> n;

    if (n == 1)
    {
        cout << 1;

        return 0;
    }
    if (n == 2)
    {
        cout << -2;

        return 0;
    }
    
    cout << cycle[n % 6];

    return 0;
}