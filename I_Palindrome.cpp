#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string copy = s;

    reverse(s.begin(), s.end());

    if (s == copy)
    {
        /* code */
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}