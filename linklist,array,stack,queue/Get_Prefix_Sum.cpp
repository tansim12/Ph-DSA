#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> arr(n);
    vector<long long int> prefixArr(n);
    for (auto &&i : arr)
    {
        cin >> i;
    }
    long long int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        prefixArr[i] = sum + arr[i];
        sum += arr[i];
    }

    reverse(prefixArr.begin(), prefixArr.end());
    for (auto &&i : prefixArr)
    {
        cout << i << " ";
    }

    return 0;
}