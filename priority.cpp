// //! max priority heep
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     priority_queue<int>pq;
//     pq.push(20);
//     pq.push(21);
//     pq.push(15);
//     pq.push(2);

//     cout << pq.top() << endl;
//     pq.pop();
//     cout << pq.top() << endl;
//     return 0;
// }

//! min priority heep
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     priority_queue<int,vector<int>,greater<int>>pq;
//     pq.push(20);
//     pq.push(21);
//     pq.push(15);
//     pq.push(2);

//     cout << pq.top() << endl;
//     pq.pop();
//     cout << pq.top() << endl;
//     return 0;
// }


// !priority queue sort by compare custom class
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;

    Student(string name , int roll , int mark){
        this->name = name;
        this->roll = roll ;
        this->mark = mark;
    }
};

class com{
    public:
    bool operator()(Student l , Student r){
        return l.roll > r.roll;
    }
};

int main()
{

    priority_queue<Student,vector<Student>,com>pq;

    int n; 
    cin >> n ;

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        string name ;
        int roll,mark;
        cin >> name >> roll >> mark;

        Student obj(name,roll,mark);
        pq.push(obj);
    }

    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl ;
    

    return 0;
}