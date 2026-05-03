#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
    
    int m = n % 120;
    
    printf("%c", (m % 12 + 8) % 12 + 'A');

    cout << (m % 10 + 6) % 10;

    return 0;
}