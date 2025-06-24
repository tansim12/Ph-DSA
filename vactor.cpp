#include <bits/stdc++.h>
using namespace std;

int main()
{
    //  vector<int> n ; // type 1
    // vector <int>n(10); // type 2
    // vector<int> arr(20, 2); // 20 hocche size , 2 hocche sob element
    // vector <int> arr = {1,3,3}; // 
    // vector <int> arr2(arr); // copy arr
    int arr3[3] = {1,2,3};
    vector<int> arr2(arr3, arr3 + 3); // copy arr

    // for (size_t i = 0; i < arr.size(); i++)
    // {
    //     /* code */
    //     cout << arr[i] << " " ;
    // }

    for (size_t i = 0; i < arr2.size(); i++)
    {
        /* code */
        cout << arr2[i] << " ";
    }

    return 0;
}