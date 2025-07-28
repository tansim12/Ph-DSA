#include <bits/stdc++.h>
using namespace std;

int main() {
    string s ;
    getline(cin , s);
    string targetWord = "Jessica";
    
    stringstream ss(s);

    string word ;

    bool isFound = false ;

    while (ss>> word)
    {
        /* code */
        if (word == targetWord)
        {
            /* code */
            isFound = true ;
            break;
        }
        
    }

    if (isFound)
    {
       cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    
    
    return 0;
}