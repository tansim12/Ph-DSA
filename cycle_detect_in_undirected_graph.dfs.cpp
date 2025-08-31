#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool visited[105];
int parent[105];
bool isCycle;

void dfs(int src)
{
    visited[src] = true;
    for (auto &&child : adj_list[src])
    {

        if (visited[child] && parent[src] != child)
            isCycle = true;

        if (!visited[child])
        {
            parent[child] = src;
            dfs(child);
        }
    }
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
        adj_list[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
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