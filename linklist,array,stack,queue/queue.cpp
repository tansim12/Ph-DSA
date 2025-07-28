#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<int> q; // first in first out 
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        int val;
        cin >> val;
        q.push(val);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop(); // pop করলে first এর টা remove হয়ে যাই । 
    }

    return 0;
}