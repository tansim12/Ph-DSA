#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    // O(n)
    for (auto &&i : arr)
    {
        cin >> i;
    }

    // O(n*m)
    for (size_t i = 0; i < t; i++)
    {
        /* code */
        int firstIndex, lastIndex;
        cin >> firstIndex >> lastIndex;
        int sum = 0;
        for (size_t i = firstIndex - 1; i <= lastIndex - 1; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }

    return 0;
}