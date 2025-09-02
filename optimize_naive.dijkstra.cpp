// optimize version
#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[105];
int dist[105];

void dijkstra(int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({ 0,src});
    dist[src] = 0 ;

    while (!pq.empty())
    {
        /* code */
        pair<int, int> parent = pq.top();
        pq.pop();

        int parent_node = parent.second;
        int parent_dist = parent.first;

        // children push
        for (auto &&child : adj_list[parent_node])
        {
            int child_node = child.first;
            int child_dist = child.second;
            if (parent_dist + child_dist < dist[child_node])
            {
                dist[child_node] = parent_dist + child_dist;
                pq.push({ dist[child_node],child_node});
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
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        dist[i] = INT_MAX;
    }

    dijkstra(0);

   for (size_t i = 0; i < n; i++)
    {
        /* code */
       cout << i << " Node-> " << dist[i] << endl ;
    }

    return 0;
}