#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    while (n--)
    {
        int x ; 
        cin >> x ;
        set<int>st;
        while (x--)
        {
            /* code */
            int val ;
            cin >> val ;
            st.insert(val);
        }
        for(auto it = st.begin();it!=st.end();it++){
            cout << *it << " " ;
        }
        cout << endl ;
    }
    
    return 0;
}