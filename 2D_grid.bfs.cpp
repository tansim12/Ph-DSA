// input by grid bfs + short distance by other node 
#include <bits/stdc++.h>
using namespace std;
int r, c;
char grid[105][105];
bool visited[105][105];
int level[105][105];
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
    level[si][sj] = 0;

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
            if (isValid(ci, cj) && !visited[ci][cj] && grid[ci][cj] == '.')
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                level[ci][cj] = level[front_i][front_j] +1;
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

    // source input
    int si, sj,di,dj;
    cin >> si >> sj >> di >> dj ;

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    bfs(si, sj);

    cout << level[di][dj];

    return 0;
}