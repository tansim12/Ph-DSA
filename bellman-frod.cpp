#include <bits/stdc++.h>
using namespace std;
class Edge {
    public:
    int a,b,c ;
    Edge(int a , int b , int c){
        this->a = a ;
        this->b = b ;
        this->c = c ;
    }
};

int dist[105];
vector<Edge> edge_list;
int n ,e ; 

void bellmen_ford(){

       for (size_t i = 0; i < n-1; i++)
    {
        /* code */
        for (auto &&ed : edge_list)
        {
            int a,b,c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if(dist[a] != INT_MAX && dist[a]+c < dist[b]){
                dist[b] = dist[a]+c;
            }
        }
        
    }

}

int main() {

    cin >> n >> e ;
    while (e--)
    {
        /* code */
        int a ,b , c ;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a,b,c));
        // edge_list.push_back(Edge(b,a,c)); // undirected graph hole

    }

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        dist[i] = INT_MAX;
    }
    dist[0] = 0;
    
    bellmen_ford();
 
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cout << i << " Node -> " << dist[i] << endl ;
    }
    
    
    return 0;
}