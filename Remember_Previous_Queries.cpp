#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    list<int> arr;
    while (n--)
    {
        int pos, val;
        cin >> pos >> val;

        if (pos == 0)
        {
            /* code */
            arr.push_front(val);
        }
        else if (pos == 1)
        {
            arr.push_back(val);
        }
        else if (pos == 2)
        {
            int deletePosition = val;
            if (deletePosition >= 0 && deletePosition < arr.size())
            {
                auto it = arr.begin();
                advance(it, deletePosition);
                arr.erase(it);
            }
        }

        cout << "L -> ";
        for (auto &&i : arr)
        {
            cout << i << " ";
        }
        cout << endl;

        cout << "R -> ";
        for (auto it = arr.rbegin(); it != arr.rend(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}