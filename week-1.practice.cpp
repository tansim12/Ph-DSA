//! Running Sum of an Array
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n ; 
//     cin >> n ;
//     vector<int> arr(n);
//     vector<int> prefixArray(n);
//     for (auto &&i : arr)
//     {
//         cin >> i ;
//     }
//     int sum = 0 ;
//     for (size_t i = 0; i < n; i++)
//     {
//         /* code */
//          prefixArray[i] = sum+arr[i];
//         sum +=arr[i];
//         cout << prefixArray[i] << " ";
//     }
     
//     return 0;
// }