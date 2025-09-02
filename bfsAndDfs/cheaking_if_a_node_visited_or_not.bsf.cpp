#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[10005];
bool vst[10005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vst[src] = true;

    while (!q.empty())
    {
        /* code */
        int parent = q.front();
        q.pop();

        // children push
        for (auto &&i : adj_list[parent])
        {
            if (vst[i] == false)
            {
                q.push(i);
                vst[i] = true;
            }
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

    memset(vst, false, sizeof(vst));
    int src, dis;
    cin >> src >> dis;

    bfs(src);

    if (vst[dis])
        cout << "Yes";
    else
        cout << "NO";

    return 0;
}