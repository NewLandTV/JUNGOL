#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> v;

    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int l;

        cin >> l;

        v.insert(v.end() - l, i + 1);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }

    return 0;
}