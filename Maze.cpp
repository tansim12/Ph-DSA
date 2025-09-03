#include <bits/stdc++.h>
using namespace std;

int r, c;
char grid[1005][1005];
bool visited[1005][1005];
int parentX[1005][1005];
int parentY[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; 

// check this node is valid
bool isValid(int i, int j)
{
    if (i < 0 || i >= r || j < 0 || j >= c)
        return false;

    return true;
}

void bfs(int si, int sj, int di, int dj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    parentX[si][sj] = -1;
    parentY[si][sj] = -1;
    
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        
        int x = par.first;
        int y = par.second;
        
        if (x == di && y == dj)
        {
            /* code */
            while (parentX[x][y] != -1)
            {
                int px = parentX[x][y];
                int py = parentY[x][y];
                if (grid[x][y] == '.')
                {
                    /* code */
                    grid[x][y] = 'X';
                }
                x = px;
                y = py;
            }
            return;
        }
        
        for (size_t i = 0; i < 4; i++)
        {
            int ci, cj;
            ci = x + d[i].first;
            cj = y + d[i].second;

            if (isValid(ci, cj) && !visited[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'D'))
            {
                visited[ci][cj] = true;
                parentX[ci][cj] = x;
                parentY[ci][cj] = y;
                q.push({ci, cj});
            }
        }
    }
}

int main()
{
    cin >> r >> c;

    int si, sj, di, dj;
    
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            else if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    memset(visited, false, sizeof(visited));

    bfs(si, sj, di, dj);
    
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
    
    return 0;
}