#include <bits/stdc++.h>
using namespace std;

int main() {
    string s ;
    while (getline(cin,s))
    {
        /* code */
        
        string newString = "";
        for(char c :s){

            if (c != ' ')
            {
                /* code */
                newString+=c;
            }
        }
        sort(newString.begin(),newString.end());
        cout << newString << endl;
        
    }
    
    return 0;
}