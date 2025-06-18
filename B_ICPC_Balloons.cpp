#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    while (n--)
    {
        /* code */
        int t ;
        string s ;
        cin >> t >> s;
        set<char> store;
        int balloons = 0;
        for (auto &&i : s)
        {
            if (store.find(i) == store.end())
            {
                /* code */
                balloons+=2;
                store.insert(i); // insert করতেছি i char টা 
            }
            else {
                balloons++;
            }
        }
        
        
        cout << balloons  << endl   ;
      
        
    }
    
    return 0;
}