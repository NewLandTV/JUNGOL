#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string n;

    while (true)
    {
        cin >> n;

        if (n == "0")
        {
            break;
        }

        reverse(n.begin(), n.end());

        int sum = 0;

        for (char c : n)
        {
            sum += c - '0';
        }
        
        size_t idx = n.find_first_not_of('0');
        
        n.erase(0, idx);

        cout << n << " " << sum << "\n";
    }
    return 0;
}