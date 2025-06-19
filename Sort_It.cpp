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

    int totalMark()
    {
        return this->math + this->eng;
    }
};

bool compare(Student l, Student r)
{

    return l.totalMark() == r.totalMark() ? l.id < r.id : l.totalMark() > r.totalMark();
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