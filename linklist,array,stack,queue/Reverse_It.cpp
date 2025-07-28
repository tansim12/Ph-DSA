#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
};



int main()
{
    int n;
    cin >> n;
    Student student[n];
    string arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> student[i].nm >> student[i].cls >> student[i].s >> student[i].id;
        arr[i] = student[i].s;
    }

    reverse(arr , arr+n);

    for (int i = 0; i < n; i++)
    {
        student[i].s = arr[i];
    }

    for (auto &&i : student)
    {
        cout << i.nm << " " << i.cls << " " << i.s << " " << i.id << endl;
    }

    return 0;
}