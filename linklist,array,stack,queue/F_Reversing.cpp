#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    vector<int> arr(n);
    for (auto &&i : arr)
    {
        cin >> i ;

    }
    reverse(arr.begin(),arr.end());
    for (auto &&i : arr)
    {
        cout << i << " ";
    }
    
    
    return 0;
}