#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nb;
    cin >> nb;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (nb--)
    {
        /* code */
        int val;
        cin >> val;
        pq.push(val);
    }

    int n;
    cin >> n;
    while (n--)
    {
        /* code */
        int val;
        cin >> val;

        if (val == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
        else if (val == 0)
        {
            int newVal;
            cin >> newVal;
            pq.push(newVal);
            cout << pq.top() << endl;
        }
        else
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                pq.pop();
                if (pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top() << endl;
            }
        }
    }

    return 0;
}