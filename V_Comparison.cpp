#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    char s;
    int b;
    cin >> a >> s >> b;

    if (s == '>')
    {
        /* code */
        if (a > b)
        {
            /* code */
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    if (s == '<')
    {
        if (a < b)
        {
            /* code */
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }

        /* code */
    }
    if (s == '=')
    {
        /* code */
        if (a == b)
        {
            /* code */
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }

    return 0;
}