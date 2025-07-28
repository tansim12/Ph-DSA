// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     //  vector<int> n ; // type 1
//     // vector <int>n(10); // type 2
//     // vector<int> arr(20, 2); // 20 hocche size , 2 hocche sob element
//     // vector <int> arr = {1,3,3}; //
//     // vector <int> arr2(arr); // copy arr
//     int arr3[3] = {1,2,3};
//     vector<int> arr2(arr3, arr3 + 3); // copy arr

//     // for (size_t i = 0; i < arr.size(); i++)
//     // {
//     //     /* code */
//     //     cout << arr[i] << " " ;
//     // }

//     for (size_t i = 0; i < arr2.size(); i++)
//     {
//         /* code */
//         cout << arr2[i] << " ";
//     }

//     return 0;
// }

//! input vector by array
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // given size
//     int n ;
//     cin >> n ;
//     // vector <int> arr(n);
//     // for (auto &&i : arr)
//     // {
//     //     cin >> i ;
//     //     cout << i << " ";
//     // }

//     // with out size

//     vector <int> arr;
//     for (size_t i = 0; i < n; i++)
//     {
//         /* code */
//         int x ;
//         cin >> x ;
//         arr.push_back(x);

//     }
//     for (size_t i = 0; i < arr.size(); i++)
//     {

//         cout << arr[i] << " " ;

//     }

//     return 0;
// }

//! vector input by string
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> nameArray(n);
    for (auto &&i : nameArray)
    {
        cin >> i;
    }
    for (auto &&i : nameArray)
    {
        cout << i << endl;
    }
    vector<int> v = {1, 2, 3, 4};
    v.resize(2);
    v.resize(4);
    cout << v[2];
    return 0;
}