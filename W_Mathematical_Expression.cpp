#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    char s;
    int b ;
    char q;
    int c;
    cin >> a >> s >>  b >> q >> c ;


    if (s == '+')
    {
        /* code */
        if (a+b == c)
        {
            /* code */
            cout << "Yes";
        }else {
            cout << a+b;
        }
        
    }
    
    if (s == '-')
    {
       /* code */
        if (a-b == c)
        {
            /* code */
            cout << "Yes";
        }else {
            cout << a-b;
        }
        
    }

    if (s == '*')
    {
      /* code */
        if (a*b == c)
        {
            /* code */
            cout << "Yes";
        }else {
            cout << a*b;
        }
        
    }



















    return 0;
}