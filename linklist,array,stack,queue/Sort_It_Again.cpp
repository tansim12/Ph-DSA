#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
    int math;
    int eng;

};

bool compare(Student l, Student r)
{

    // not copy its complex ternary operator use case.
    return l.eng == r.eng ? 
    l.math == r.math ? l.id < r.id  : l.math > r.math
    : l.eng > r.eng;
};

int main()
{
    int n;
    cin >> n;
    Student student[n];

    for (auto &&i : student)
    {
        cin >> i.nm >> i.cls >> i.s >> i.id >> i.math >> i.eng;
    }

    sort(student, student + n, compare);

    for (auto &&i : student)
    {
        cout << i.nm << " " << i.cls << " " << i.s << " " << i.id << " " << i.math << " " << i.eng << endl;
    }

    return 0;
}