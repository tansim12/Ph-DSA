// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     char name[20];
//     int role;
//     double gpa;
// };

// int main()
// {

//     Student student1,student2;
//     cin.getline(student1.name, 20); // input by string
//     cin >> student1.role >> student1.gpa;

//     cin.ignore();

//     cin.getline(student2.name, 20); // input by string
//     cin >> student2.role >> student2.gpa;

//     cout << student1.name << " " << student1.role << " " << student1.gpa << endl;
//     cout << student2.name << " " << student2.role << " " << student2.gpa << endl;
//     return 0;
// }

// constructor
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int role;
    double gpa;

    Student(int role, double gpa)
    {
        this->role = role;
        this->gpa = gpa;
    }
};

int main()
{

    Student tansim(23, 3.03);
    Student tansim2(23, 3.03);

    cout << tansim.role << " " << tansim.gpa << endl;
    cout << tansim2.role << " " << tansim2.gpa << endl;
    return 0;
}