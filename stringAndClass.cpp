
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
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);

//     stringstream ss(s);

//     string word;

//     ss >> word;
//     reverse(word.begin(), word.end());
//     cout << word;

//     while (ss >> word)
//     {
//         /* code */

//         reverse(word.begin(), word.end());
//         cout << " " << word;
//     }

//     return 0;
// }

//! Class inside function

// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int roll;

//     // constructor
//     Student(string name , int roll)
//     {
//         this->name = name;
//         this->roll = roll;
//     }

//     void call(int age = 0)
//     {

//         cout << name << " " << roll << " " << age << endl;
//     }
// };

// int main()
// {

//     Student tansim("Tansim",33);
//     Student tashdid("Tashdid",20);

//     tansim.call(10);
//     tashdid.call();
//     return 0;
// }




//! Dynamic class and many case copy object

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;

    // constructor
    Student(string name , int roll)
    {
        this->name = name;
        this->roll = roll;
    }

    void call(int age = 0)
    {

        cout << name << " " << roll << " " << age << endl;
    }
};

int main()
{

    Student* tansim  = new Student("Tansim",33);
    Student* sojib  = new Student("Sojib",12);

    // sojib = tansim ;  // case 1
    // sojib->name = tansim->name; // case 2
    *sojib = *tansim; // case 3

    delete tansim;

    // cout << tansim->name << "==> " << "Tansim" << endl ; 
    cout << sojib->name << "==> " << "sojib" << endl  ; 
    return 0;
}