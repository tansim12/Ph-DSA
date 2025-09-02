#include <bits/stdc++.h>
using namespace std;
vector<int>adj_list[105];
bool visited[105];
int parent[105];
bool isCycle;

void bfs( int src){
    queue<int>q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        /* code */
        int pr = q.front();
        q.pop();

        for (auto &&child : adj_list[pr] )
        {
            if(visited[child] && parent[pr] != child)
            isCycle = true;

            if(!visited[child] ){
                bfs(child);
                visited[child] = true;
                parent[child] = pr;
            }
        }
        
    }
    
}

int main() {
    int n,e;
    cin >> n >> e;
    while (e--)
    {
        /* code */
        int a , b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(visited,false,sizeof(visited));
    memset(parent,-1,sizeof(parent));
    isCycle = false ;

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        if(!visited[i])
        bfs(i);
    }
    
    cout << (isCycle ? "Cycle Detected" : "NO Cycle");
    return 0;
}