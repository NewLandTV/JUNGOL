#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

#define SIZE 100

int n = 0, m = 0;
int map[SIZE][SIZE] = { 0, };
bool visit[SIZE][SIZE] = { false, };
int t = 0, s = 0;   // t: 죽을 수 있는 저글링들이 모두 죽을 때까지 걸리는 시간, s: 죽지 않고 남아 있게 되는 저글링의 수

void BFS(int x, int y)
{
    if (!map[x][y])
    {
        return;
    }

    queue<pair<pair<int, int>, int>> q;
    q.push({ { x, y }, 3 });
    visit[x][y] = true;
    s--;

    int dx[4] = { 0, 0, -1, 1 };
    int dy[4] = { -1, 1, 0, 0 };

    while (!q.empty())
    {
        pair<pair<int, int>, int> k = q.front();
        q.pop();

        x = k.first.first;
        y = k.first.second;
        int at = k.second;

        t = max(t, at);

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (ny < 0 || ny >= m || nx < 0 || nx >= n)
            {
                continue;
            }

            if (!visit[nx][ny] && map[nx][ny])
            {
                q.push({ { nx, ny }, at + 1 });
                visit[nx][ny] = true;
                s--;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> m >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        for (int j = 0; j < m; j++)
        {
            map[i][j] = str[j] - '0';

            if (map[i][j])
            {
                s++;
            }
        }
    }
    
    int x, y;   // 방사능오염을 가하는 위치
    cin >> x >> y;
    BFS(y - 1, x - 1);

    cout << t << '\n' << s;

    return 0;
}