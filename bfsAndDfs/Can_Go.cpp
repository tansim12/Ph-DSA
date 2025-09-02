#include <bits/stdc++.h>
using namespace std;
int r, c;
char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

// check this node is valid
bool isValid(int i, int j)
{
    if (i < 0 || i >= r || j < 0 || j >= c)
        return false;

    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while (!q.empty())
    {
        /* code */
        pair<int, int> front = q.front();
        q.pop();

        int front_i = front.first;
        int front_j = front.second;

        // cout << front_i << " " << front_j << endl;

        for (size_t i = 0; i < 4; i++)
        {
            /* code */
            int ci, cj;
            ci = front_i + d[i].first;
            cj = front_j + d[i].second;
            if (isValid(ci, cj) && !visited[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'B'))
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
            }
        }
    }
}

int main()
{

    cin >> r >> c;

    for (size_t i = 0; i < r; i++)
    {
        /* code */
        for (size_t j = 0; j < c; j++)
        {
            /* code */
            cin >> grid[i][j];
        }
    }

    pair<int, int> a;
    pair<int, int> b;

    for (size_t i = 0; i < r; i++)
    {
        /* code */
        for (size_t j = 0; j < c; j++)
        {
            /* code */
            if (grid[i][j] == 'A')
            {
                a = {i, j};
            }
            if (grid[i][j] == 'B')
            {
                b = {i, j};
            }
        }
    }

    memset(visited, false, sizeof(visited));
    bfs(a.first, a.second);

    if(visited[b.first][b.second]) cout << "YES";
    else cout << "NO";

    return 0;
}