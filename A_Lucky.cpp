#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        /* code */
        string s;
        cin >> s;

        if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5])
        {
            /* code */
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}