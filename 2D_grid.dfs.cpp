// input by grid dfs 
#include <bits/stdc++.h>
using namespace std;
int r, c;
char grid[105][105];
bool visited[105][105];
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
    cout << si << " " << sj << endl;
    visited[si][sj] = true;
    for (size_t i = 0; i < 4; i++)
    {
        /* code */
        int ci, cj;
        ci = si + d[i].first;
        cj = sj + d[i].second;

        if (isValid(ci,cj) && !visited[ci][cj])
        {
            dfs(ci, cj);
            visited[ci][cj] = true;
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

    // source input
    int si, sj;
    cin >> si >> sj;

    memset(visited, false, sizeof(visited));
    dfs(si, sj);

    return 0;
}