#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool visited[105];
bool pathVisited[105];
bool isCycle;

void dfs(int src)
{
    visited[src] = true;
    pathVisited[src] = true;
    for (auto &&child : adj_list[src])
    {

        if (visited[child] && pathVisited[child])
            isCycle = true;

        if (!visited[child])
        {
            dfs(child);
        }
    }
    pathVisited[src] = false;
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        /* code */
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    memset(visited, false, sizeof(visited));
    memset(pathVisited, false, sizeof(pathVisited));
    isCycle = false;

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        if (!visited[i])
            dfs(i);
    }

    if (isCycle)
        cout << "Cycle Detected";
    else
        cout << "NO Cycle";

    return 0;
}