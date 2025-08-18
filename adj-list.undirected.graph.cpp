//! ajd list undirect graph
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,e;
    cin >> n >> e;
    // int vector type array
    vector<int> adj_list[n];
    while (e--)
    {
        /* code */
        int a ,b ;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cout << i << "->" << " " ;
        for (auto &&j : adj_list[i])
        {
            cout << j << " " ;
        }
        cout << endl ;
        
    }
    
    
    return 0;
}