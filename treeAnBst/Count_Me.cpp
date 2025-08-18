#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        /* code */
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        map<string, int> mp;

        
        string printWord ;
        int maxCount =0;
        while (ss >> word)
        {
            /* code */
            mp[word]++;

            if(maxCount < mp[word]){
                maxCount = mp[word];
                printWord = word;
            }
        }

        cout << printWord << " " << maxCount << endl ;
    }

    return 0;
}