#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

float Max(float a, float b)
{
    return a > b ? a : b;
}

int main()
{
    int n;

    cin >> n;

    float scores[40];

    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    sort(scores, scores + n);

    if (!(n & 1))
    {
        float max = 0.0f;

        for (int i = 0; i < n >> 1; i++)
        {
            max = Max(max, (scores[i] + scores[n - i - 1]) * 0.5f);
        }

        cout << fixed << setprecision(1) << max;

        return 0;
    }

    float ans = 100.0f;

    for (int i = 0; i < n; i++)
    {
        vector<float> temp;

        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                temp.push_back(scores[j]);
            }
        }

        float max = scores[i];

        for (int j = 0; j < temp.size() >> 1; j++)
        {
            max = Max(max, (temp[j] + temp[temp.size() - j - 1]) * 0.5f);
        }

        if (max < ans)
        {
            ans = max;
        }
    }

    cout << fixed << setprecision(1) << ans;

    return 0;
}