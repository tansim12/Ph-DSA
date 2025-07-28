#include <bits/stdc++.h>
using namespace std;
class MyStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    };
    void pop()
    {
        l.pop_back();
    };
    int top()
    {
        return l.back();
    };
    int size()
    {
        return l.size();
    };
    bool empty()
    {
        return l.empty();
    };
};
class MyQueue
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    };
    void pop()
    {
        l.pop_front();
    };
    int front()
    {
        return l.front();
    };
    int back()
    {
        return l.back();
    };
    int size()
    {
        return l.size();
    };
    bool empty()
    {
        return l.empty();
    };
};

int main()
{
    int n, m;
    cin >> n >> m;
    MyStack st;
    MyQueue q;
    if (n != m)
    {
        cout << "NO";
        return 0;
    }
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        int val;
        cin >> val;
        st.push(val);
    }
    for (size_t i = 0; i < m; i++)
    {
        /* code */
        int val;
        cin >> val;
        q.push(val);
    }

    bool isMatch = true;
    while (!st.empty())
    {
        /* code */
        if (st.top() != q.front())
        {
            isMatch = false;
            break;
        }
        st.pop();
        q.pop();
    }

    cout << (isMatch ? "YES" : "NO");

    return 0;
}
