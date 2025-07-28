#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n ;
        cin >> n ;
        vector<int> arr(n);
        bool isSort = false ;
        for (auto &&i : arr)
        {
            cin >> i ;
        }
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            for (size_t j = i+1; j < n; j++)
            {
                /* code */
                if (arr[i] > arr[j])
                {
                    /* code */
                    isSort = true ; 
                    break;
                }
                
            }
            
        }
        
        cout << (isSort ? "NO" : "YES" )<< endl ;

    }
    
    return 0;
}