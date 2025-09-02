#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vst[1005];

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        /* code */
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vst, false, sizeof(vst));

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int x;
        cin >> x;

        if (adj_list[x].size() > 0)
        {
            sort(adj_list[x].begin(), adj_list[x].end(), greater<int>());
            for (auto &&i : adj_list[x])
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}