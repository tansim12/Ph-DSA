#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name ;
    int roll ;
};

int main() {
    int n ;
    cin >> n ;

    Student student[n] ;

  for (auto &&i : student)
  {
    cin >> i.name >> i.roll;
  }

  for (auto &&i : student)
  {
    cout << i.name << " " << i.roll << endl;
  }
  

    return 0;
}