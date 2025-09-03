// input by grid bfs + short distance by other node
#include <bits/stdc++.h>
using namespace std;
int r, c, si, sj, di, dj;
char grid[105][105];
bool visited[105][105];
int level[105][105];
vector<pair<int, int>> d = {{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};

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

        for (size_t i = 0; i < 8; i++)
        {
            /* code */
            int ci, cj;
            ci = front_i + d[i].first;
            cj = front_j + d[i].second;
            if (isValid(ci, cj) && !visited[ci][cj])
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                level[ci][cj] = level[front_i][front_j] + 1;
            }
        }
    }
}

int main()
{

    int n;
    cin >> n;

    while (n--)
    {
        cin >> r >> c >> si >> sj >> di >> dj;

        memset(visited, false, sizeof(visited));
        memset(level, -1, sizeof(level));

        bfs(si, sj);
        cout << level[di][dj] << endl;
    }

    return 0;
}