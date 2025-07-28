#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<string> q;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        int type;
        cin >> type;

        if (type == 1)
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
        else
        {
            string person;
            cin >> person;
            q.push(person);
        }
    }

    return 0;
}