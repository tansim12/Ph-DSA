#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int arr[3] = {1,2,3};
    // list<int>arr2(arr,arr+3);

    // vector<int> arr = {1,2,3};
    // list<int>arr2(arr.begin(),arr.end());

    list<int> arr2 = {10, 20, 30, 40, 50};
    list<int> arr3 = {10, 20, 30, 40, 50};
    // int x = arr2.empty();
    // arr2.reverse();

    // arr2.resize(100,8);
    // cout << arr2.size() << endl ;

    // arr2.push_back(56);
    // arr2.pop_back();

    arr2.insert(next(arr2.begin(), 1), 862); // index access and insert value 
    arr2.insert(next(arr2.begin(), 1), arr3.begin(),arr3.end()); // insert a new array 

    for (auto &&i : arr2)
    {
        cout << i << endl;
    }

    return 0;
}