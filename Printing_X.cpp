#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int middleIndex = n / 2;

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        if (i == middleIndex)
        {
            /* code */
            for (size_t j = 0; j < middleIndex; j++)
            {
                /* code */
                cout << " ";
            }
            cout << "X" << endl;
        }
        else if (i < middleIndex)
        {
            /* code */
            for (size_t j = 0; j < i; j++)
            {
                /* code */
                cout << " ";
            }
            cout << "\\";
            int spaceCount = n - 2 * i - 2;
            for (size_t j = 0; j < spaceCount; j++)
            {
                /* code */
                cout << " ";
            }
            cout << "/" << endl;
        }
        else
        {
            /* code */
            int index = n - i - 1;
            for (size_t j = 0; j < index; j++)
            {
                /* code */
                cout << " ";
            }
            cout << "/";
            int spaceCount = n - 2 * index - 2;
            for (size_t j = 0; j < spaceCount; j++)
            {
                /* code */
                cout << " ";
            }
            cout << "\\" << endl;
        }
    }

    return 0;
}