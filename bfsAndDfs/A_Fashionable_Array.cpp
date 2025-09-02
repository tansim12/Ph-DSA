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
            int x;
            cin >> x;
            arr[i] = x;
        }

        sort(arr, arr + t);
        int minV = arr[0];
        int maxV = arr[t - 1];

        if (minV % 2 == 0 && maxV % 2 == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            int i = 0 ;
            int cnt = 0 ;
            while (arr[i]%2 != maxV%2)
            {
                /* code */
                i++;
                cnt++;
            }

            int j = t-1 ;
            int cnt2 = 0 ;
            while (arr[j]%2 != minV%2)
            {
                /* code */
                j--;
                cnt2++;
            }
            cout << min(cnt,cnt2) << endl ;
        }
    }

    return 0;
}