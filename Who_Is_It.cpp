#include <bits/stdc++.h>
using namespace std;


class Student {
public:
    int id;
    string name;
    string group;
    int mark;
};

int main() {
    int n;
    cin >> n;

    while (n--) {
        Student topStudent;
        topStudent.mark = -1; 
        topStudent.id = 4;       

        for (int i = 0; i < 3; i++) {
            Student student;
            cin >> student.id >> student.name >> student.group >> student.mark;

            if (student.mark > topStudent.mark) {
                topStudent = student;
            } else if (student.mark == topStudent.mark && student.id < topStudent.id) {
                topStudent = student;
            }
        }

        cout << topStudent.id << " " << topStudent.name << " " << topStudent.group << " " << topStudent.mark << endl;
    }

    return 0;
}