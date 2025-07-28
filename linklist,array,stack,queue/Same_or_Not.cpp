#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    stack<int>st;
    queue<int>q;
    if(n != m){
        cout << "NO";
        return 0;
    }
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        int val ;
        cin >> val ;
        st.push(val);
    }
    for (size_t i = 0; i < m; i++)
    {
        /* code */
        int val ;
        cin >> val ;
        q.push(val);
    }

    bool isMatch = true ;
    while (!st.empty())
    {
        /* code */
        if(st.top() != q.front()) {
            isMatch = false ;
            break;
        }
        st.pop();
        q.pop();
    }
    
    cout << (isMatch ? "YES" : "NO");
    
    return 0;
}