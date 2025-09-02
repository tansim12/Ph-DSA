//! edge list unordered graph
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,e;
    cin >> n >> e;

    vector<pair<int,int>>eg_list;
    while (e--)
    {
        /* code */
        int a,b;
        cin >> a >> b;
        eg_list.push_back({a,b});
    }

    for (auto &&i : eg_list)
    {
        cout << i.first << " " << i.second << endl ;
    }
    
    
    return 0;
}