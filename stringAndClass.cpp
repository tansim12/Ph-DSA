
//! different way of call by string constructor
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s("Hello World",3);

//     // string s("Hello World",3,9);

//     // string s = "Hello world";
//     // string t(s,3);

//     // string s = "Hello world";
//     // string t(s,0,3);

//     // string t(59,'H');

//     cout << s<< endl ;
//     return 0;
// }

// ! sor by asc and desc
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s ;
//     getline(cin , s);

//     // sort(s.begin(),s.end()); // ASC
//     sort(s.begin(),s.end(),greater<char>()); // DESC
//     cout << s << endl ;
//     return 0;
// }

//! for range loop
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     string s ;
//     getline(cin , s);

//     for (auto &&i : s)
//     {
//         cout << i << endl ;
//     }

//     return 0;
// }

//! number array reverse
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[5] = {1,2,3,4,5};
//     reverse(arr , arr+5);

//     for (auto &&i : arr)
//     {
//         cout << i << endl;
//     }

//     return 0;
// }


// !reverse word 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;

    while (ss >> word)
    {
        /* code */

        reverse(word.begin(), word.end());
        cout << word << " ";
    }

    return 0;
}