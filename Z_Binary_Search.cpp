#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, t;
    cin >> n >> t;
    vector<long long int> arr(n);
    for (auto &&i : arr)
    {
        cin >> i;
    }
    sort(arr.begin(), arr.end());

    for (size_t i = 0; i < t; i++)
    {
        /* code */
        long long int givenNumber;
        cin >> givenNumber;

        int left = 0;
        int right = arr.size() - 1;
        bool isFound = false;

        // চলবে, যতখন না left, right er সমান বা বড় হচ্ছে না ।
        while (left <= right)
        {
            int mid = (left + right) / 2;
            /* code */
            if (givenNumber == arr[mid])
            {
                /* code */
                isFound = true;
                break;
            }
            else if (givenNumber > arr[mid])
            {
                /* code */
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        if (isFound)
        {
            /* code */
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}