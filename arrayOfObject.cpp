// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int roll;
// };

// int main()
// {
//     int n;
//     cin >> n;
//     Student student[n];

//     for (auto &&i : student)
//     {
//         cin >> i.name >>  i.roll;
//     }

//     // ! min and max roll
//     // int mm = INT_MAX;
//     // int mx = INT_MIN;

//     // for (auto &&i : student)
//     // {
//     //     mm =  min(i.roll,mm);
//     //     mx =  max(i.roll,mx);
//     // }

//     // cout << mm << endl << mx  ;

//     Student mn ;
//     mn.roll = INT_MAX;
//     for (auto &&i : student)
//     {
//        if (i.roll < mn.roll)
//        {
//         /* code */
//         mn = i ;
//        }

//     }

//      cout << mn.name << " " << mn.roll << endl  ;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
};

//! desc sort
bool compare(Student l, Student r )
{
    // return l.name < r.name;
   return l.roll > r.roll;
}

int main()
{
    int n;
    cin >> n;
    Student student[n];

    for (auto &&i : student)
    {
        cin >> i.name >> i.roll;
    }

    sort(student, student + n, compare);

    for (auto &&i : student)
    {
        cout << i.name << " " << i.roll << endl;
    }

    return 0;
}