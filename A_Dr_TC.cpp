#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<string> arr;
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            if (s[i] == '1')
            {
                s[i] = '0';
                arr.push_back(s);
                s[i] = '1';
            }
            else
            {
                s[i] = '1';
                arr.push_back(s);
                s[i] = '0';
            }
        }
        int sum = 0 ;
        for (auto &&s : arr)
        {
            int cnt = 0 ;
            for (size_t i = 0; i < s.size(); i++)
            {
                /* code */
                if(s[i] == '1') cnt++;
            }
            sum =  sum+cnt ;
            
        }
        cout << sum  << endl;
    }

    return 0;
}