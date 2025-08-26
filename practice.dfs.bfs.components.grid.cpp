// ! You will be given an undirected graph as input. Then you will be given a node N. You need to tell the number of nodes that can be visited from node N.

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> adj_list[105];
// bool visited[105];
// int cnt = 0;

// void dfs(int src)
// {
//     cnt++;
//     visited[src] = true;
//     for (auto &&child : adj_list[src])
//     {
//         if (!visited[child])
//         {
//             dfs(child);
//             visited[child] = true;
//         }
//     }
// }

// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     while (e--)
//     {
//         /* code */
//         int a, b;
//         cin >> a >> b;
//         adj_list[a].push_back(b);
//         adj_list[b].push_back(a);
//     }
//     memset(visited, false, sizeof(visited));

//     int src;
//     cin >> src;

//     dfs(src);

//     cout << cnt;

//     return 0;
// }

//! You will be given an undirected graph as input. You need to tell the number of components in this graph.

#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool visited[105];
int cnt = 0;

void dfs(int src)
{
    visited[src] = true;
    // cout << src;
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