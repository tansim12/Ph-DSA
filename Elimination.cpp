#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        stack<char> st;
        string s;
        cin >> s;
        for (auto &&i : s)
        {

            if (!st.empty())
            {
                char topVal = st.top();
                char currentVal = i;
                if (topVal == '0' && currentVal == '1')
                {
                    st.pop();
                }
                else
                {
                    st.push(i);
                }
            }
            else
            {
                st.push(i);
            }
        }
        cout << (st.empty() ? "YES" : "NO") << endl;
    }

    return 0;
}