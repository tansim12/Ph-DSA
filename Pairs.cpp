#include <bits/stdc++.h>
using namespace std;

class Student {
    public : 
    string name ; 
    int roll ;
    Student(string name , int roll ){
        this->name  = name ;
        this->roll = roll;
    }
};

class com{
    public:
    bool operator()(Student l , Student r){
        if (l.name == r.name) {
            return l.roll < r.roll; 
        }
        return l.name > r.name;
    }
};

int main() {
    int n;
    cin >>n;
    priority_queue<Student,vector<Student>,com>pq;
    while (n--)
    {
        /* code */
        string s ;
        int val ; 
        cin >> s >> val ;
        Student obj(s,val);
        pq.push(obj);
    }

      while (!pq.empty()) {
        cout << pq.top().name << " " << pq.top().roll << endl;
        pq.pop();
    }
    
    
    return 0;
}