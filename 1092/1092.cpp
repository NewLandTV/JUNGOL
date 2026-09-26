#include <iostream>

using namespace std;

typedef unsigned long long llu;

llu Pow(llu base, int exp, int mod)
{
	llu x = 1;
	
	for (; exp; exp >>= 1, base = base * base % mod)
	{
		if (exp & 1)
		{
			x = x * base % mod;
		}
	}
	
	return x;
}

int main()
{
    int x, y;

    cin >> x >> y;
    cout << Pow(x, y, 20091024);

    return 0;
}