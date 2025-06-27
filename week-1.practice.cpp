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

//!Equilibrium Index 
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (auto &&i : arr)
//     {
//         cin >> i;
//     }

//     for (size_t i = 0; i < n; i++)
//     {
//         int sumOfLeft = 0, sumOfRight = 0;

//         //  i এর উপরে depend করে right side loop
//     for (size_t j = i + 1; j < n; j++)
//         {
//             sumOfRight += arr[j];
//         }

//         //  i এর উপরে depend করে left side loop
//          for (size_t k = 0; k < i; k++)
//         {
//             sumOfLeft += arr[k];
//         }

//          if (sumOfLeft == sumOfRight)
//         {
//             cout  << i << endl;
//         }
//     }

//     return 0;
// }

