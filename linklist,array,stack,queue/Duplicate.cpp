#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> arr(n);
    for (auto &&i : arr)
    {
        cin >> i;
    }
    set<long long int> store;
    bool isFound = false;

    for (auto &&i : arr)
    {
        if (store.count(i)) // এইখানে check দিচ্ছে আছে নাকি 
        {
            /* code */
            isFound = true;
            break;
        }
        store.insert(i); // এইখানে every value insert করতেছে । 
    }

    if (isFound)
    {
        /* code */
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}