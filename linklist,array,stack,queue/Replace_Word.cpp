#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    while (n--)
    {
        /* code */
        string s ;
        string s2 ; 
        
        cin  >> s >> s2;
       int position = s.find(s2);
       while (position != string::npos)
       {
        /* code */
        s.replace(position, s2.length(), "#");
        position = s.find(s2, position + 1);
        
       }
       cout << s <<  endl;
       
    }
    
    return 0;
}