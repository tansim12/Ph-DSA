#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<long long int> arr(n);
    vector<long long int> prefixSumArray(n);
    // O(n)
    for (auto &&i : arr)
    {
        cin >> i;
    }

    // create prefix sum by new array
    long long int prefixSum = 0;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        prefixSumArray[i] = prefixSum + arr[i];
        prefixSum += arr[i];
    }

    // O(n)
    while (t--)
    {
        /* code */
        int firstIndex, lastIndex;
        cin >> firstIndex >> lastIndex;
        firstIndex --;
        lastIndex --;

       long long int sum = 0;
        if (firstIndex == 0)
        {
            /* code */
            sum = prefixSumArray[lastIndex];
        }
        else
        {
            // মাঝের গুলা sum করতে বলে । firstIndex এর আগের গুলা বাদ দিয়ে দিতে হবে ।  
            sum = abs(prefixSumArray[lastIndex] - prefixSumArray[firstIndex - 1]);
        }

        cout << sum << endl;
    }

    return 0;
}