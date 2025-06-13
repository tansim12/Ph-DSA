#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }

    cout << endl;

    sort(arr, arr + n , greater<int>());

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }

    return 0;
}