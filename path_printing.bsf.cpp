// ! single_soruce_shortst_distance by path printing
#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[10005];
bool vst[10005];
int nodeOfLevel[10005];
int parentNode[10005];

void bfs(int src, int dst)
{
    queue<int> q;
    q.push(src);
    vst[src] = true;
    nodeOfLevel[src] = 0;
    parentNode[src] = -1;

    while (!q.empty())
    {
        /* code */
        int parent = q.front();
        q.pop();

        // children push
        for (auto &&child : adj_list[parent])
        {
            if (vst[child] == false)
            {
                q.push(child);
                vst[child] = true;
                nodeOfLevel[child] = nodeOfLevel[parent] + 1; // child er level hobe parent er theke 1 beshi
                parentNode[child] = parent;                   // child node er parent hobe uporer parent
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
    memset(parentNode, -1, sizeof(parentNode));
    int src, dst;
    cin >> src >> dst;

    bfs(src, dst);

    // for (size_t i = 0; i < n; i++)
    // {
    //     /* code */
    //     cout << i << ' ' << "parent -> " << parentNode[i] << endl;
    // }

    int node = dst;
    vector<int> v;

    while (node != -1)
    {
        /* code */
        v.push_back(node);
        node = parentNode[node];
    }

    reverse(v.begin(), v.end());

    for (auto &&i : v)
    {
        cout << i << " ";

    }
    

    // cout << nodeOfLevel[dst];
    return 0;
}