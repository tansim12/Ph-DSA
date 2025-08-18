#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int adj_mtx[n][n];
    memset(adj_mtx, 0, sizeof(adj_mtx));

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        for (size_t j = 0; j < n; j++)
        {
            /* code */
            if (i == j)
                adj_mtx[i][j] = 1;
        }
    }

    while (e--)
    {
        /* code */
        int a, b;
        cin >> a >> b;
        adj_mtx[a][b] = 1;
        adj_mtx[b][a] = 1;
    }

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        for (size_t j = 0; j < n; j++)
        {
            /* code */
            cout << adj_mtx[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}