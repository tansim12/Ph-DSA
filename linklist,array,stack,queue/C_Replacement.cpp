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
        if (i > 0)
        {
            /* code */
            i = 1;
        }
        if (i < 0)
        {
            i = 2;
        }

        cout << i << " ";
    }

    return 0;
}