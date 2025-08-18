#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;

    Student(string name, int roll, int mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};

class com
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.mark == r.mark)
        {
            return l.roll > r.roll;
        }
        return l.mark < r.mark;
    }
};

int main()
{
    int nb;
    cin >> nb;
    priority_queue<Student, vector<Student>, com> pq;
    while (nb--)
    {
        /* code */
        string s;
        int roll, mark;
        cin >> s >> roll >> mark;
        Student obj(s, roll, mark);
        pq.push(obj);
    }

    int n;
    cin >> n;
    while (n--)
    {
        /* code */
        int val;
        cin >> val;

        if (val == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        }
        else if (val == 0)
        {
            string s;
            int roll, mark;
            cin >> s >> roll >> mark;
            Student obj(s, roll, mark);
            pq.push(obj);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        }
        else
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                pq.pop();
                if (pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
            }
        }
    }

    return 0;
}