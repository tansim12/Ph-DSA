// #include <bits/stdc++.h>
// using namespace std;

// int main() {
    
//     string s = "Hello World" ;
//     for(string:: iterator it = s.begin(); it < s.end();it++) {
//         cout<< *it << endl;
//     };
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s = "Hello Worldfe";
//     // for(string :: iterator it = s.begin() ; it < s.end();it++){
//     //     cout << *it << endl;
//     // }

//     for(auto  it = s.begin() ; it < s.end() ; it ++){
//         cout << *it << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int x ;
    cin >> x;
    cin.ignore(); // enter কে ignore করতে হবে । 
    string s ;
    getline(cin, s);
    cout << x << endl ; 
    cout << s ; 
    return 0;
}