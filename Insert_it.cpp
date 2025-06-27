#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n1;
    cin >> n1;
    vector<int> arr1(n1);
    for (auto &&i : arr1)
    {
        cin >> i;
    }

    int n2;
    cin >> n2;
    vector<int> arr2(n2);
    for (auto &&i : arr2)
    {
        cin >> i;
    }

    int index;
    cin >> index;

    arr1.insert(arr1.begin()+index,arr2.begin(),arr2.end());

     for (auto &&i : arr1)
    {
        cout << i << " ";
    }

    return 0;
}