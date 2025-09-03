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

void dfs(int si, int sj)
{
    visited[si][sj] = true;
    for (size_t i = 0; i < 4; i++)
    {
        /* code */
        int ci, cj;
        ci = si + d[i].first;
        cj = sj + d[i].second;

        if (isValid(ci, cj) && !visited[ci][cj] && grid[ci][cj] == '.')
        {
            dfs(ci, cj);
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

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    memset(visited, false, sizeof(visited));

    if (grid[si][sj] == '.' && grid[di][dj] == '.')
    {
        dfs(si, sj);
        if (visited[di][dj])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}