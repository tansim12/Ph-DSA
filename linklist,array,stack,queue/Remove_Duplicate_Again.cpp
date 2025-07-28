#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> arr;
    int val;
    while (true)
    {
        /* code */
        cin >> val;
        if (val == -1)
        {
            /* code */
            break;
        }
        arr.push_back(val);
    }

    arr.sort();
    arr.unique();
    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}