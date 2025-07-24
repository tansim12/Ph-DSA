//! Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.
#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> st;
    queue<int> q;

    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        int val;
        cin >> val;
        st.push(val);
    }
    int n2;
    cin >> n2;

    if (n != n2)
    {
        /* code */
        cout << "NO";
        return 0;
    }

    for (size_t i = 0; i < n2; i++)
    {
        /* code */
        int val;
        cin >> val;
        q.push(val);
    }

    bool isNotEq = true;
    while (!st.empty())
    {
        /* code */

        if (st.top() != q.front())
        {
            /* code */
            isNotEq = false;
            break;
        }
        st.pop();
        q.pop();
    }
    cout << (isNotEq ? "YES" : "NO");

    return 0;
}