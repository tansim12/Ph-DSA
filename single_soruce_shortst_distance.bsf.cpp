// ! single_soruce_shortst_distance
#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[10005];
bool vst[10005];
int nodeOfLevel[10005];

void bfs(int src, int dst)
{
    queue<int> q;
    q.push(src);
    vst[src] = true;
    nodeOfLevel[src] = 0;

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
                nodeOfLevel[i] = nodeOfLevel[parent] + 1; // child er level hobe parent er theke 1 beshi
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
    memset(nodeOfLevel, -1, sizeof(nodeOfLevel));
    int src, dst;
    cin >> src >> dst;

    bfs(src, dst);

    cout << nodeOfLevel[dst];
    return 0;
}