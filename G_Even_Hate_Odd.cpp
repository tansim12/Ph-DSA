#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        /* code */
        int t;
        cin >> t;
        int arr[t];
        for (size_t i = 0; i < t; i++)
        {
            /* code */
            cin >> arr[i];
        }

        int evenCount = 0;
        int oddCount = 0;
        // Example: print the array
        for (int i = 0; i < t; ++i)
        {
            if (arr[i] % 2 == 0)
            {
                /* code */
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }
        int target = t / 2;

        int maxValue = max(evenCount, oddCount);

        int getOperation = maxValue - target;
        if (t % 2 != 0)
        {
            /* code */
            cout << -1 << endl;
        }
        else
        {

            cout << getOperation << endl;
        }
    }

    return 0;
}