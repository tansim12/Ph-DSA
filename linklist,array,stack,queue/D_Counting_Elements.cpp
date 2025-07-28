#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &&i : arr)
    {
        cin >> i;
    }
    int count = 0;
    for (auto &&i : arr)
    {
        auto pos = find(arr.begin(), arr.end(), i+1);
        if (pos != arr.end())
        {
            /* code */
            count++;
        }
    }

    cout << count;

    return 0;
}