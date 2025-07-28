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
        char s;
        cin >> t >> s;

        cout << s ;
        for (size_t i = 0; i < t-1; i++)
        {
            /* code */
            cout <<  " " << s   ;
        }
        cout << endl ; 
        
    }

    return 0;
}