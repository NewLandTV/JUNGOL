#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
    int x[250000];
    long long d, cur = 0, step = 0;
	
	cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        
		if (i > 0 && x[i] - x[i - 1] < 2)
		{
            cout << "-1";
			
			return 0;
		}
    }
    
    for (int i = 0; i < n; i++)
    {
    	d = (x[i] - cur - 1) >> 1;
		cur += d * 2;
		step += d;
    	
    	if (x[i] - cur == 2)
    	{
    		cur++;
    		step++;
		}
		
		cur += 2;
		step++;
	}
    
    cout << step;
	
	return 0;
}
