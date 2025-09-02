// number of components 
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool visited[105];
int cnt = 0;

void dfs(int src)
{
    visited[src] = true;
    for (auto &&child : adj_list[src])
    {
        if (!visited[child])
        {
            dfs(child);
            visited[child] = true;
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
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        if (!visited[i])
        {
            dfs(i);
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}