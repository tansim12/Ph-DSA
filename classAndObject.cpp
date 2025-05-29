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
// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     int role;
//     double gpa;

//     Student(int role, double gpa)
//     {
//         this->role = role;
//         this->gpa = gpa;
//     }
// };

// int main()
// {

//     Student tansim(23, 3.03);
//     Student tansim2(20, 5.03);

//     cout << tansim.role << " " << tansim.gpa << endl;
//     cout << tansim2.role << " " << tansim2.gpa << endl;
//     return 0;
// }

// dynamic object
// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     int role;
//     double gpa;

//     Student(int role, double gpa)
//     {
//         this->role = role;
//         this->gpa = gpa;
//     }
// };

// int main()
// {

//     // Static Ojbect
//     //   Student tansim(23, 3.03);
//     //     Student tansim2(20, 5.03);

//     // dynamic object 
//     Student *tansim = new Student(23, 3.03);  // tansim is a pointer  
//     Student *tansim2 = new Student(20, 3.53);

//     cout << tansim->role << " " << tansim->gpa << endl;
//     cout << tansim2->role << " " << tansim2->gpa << endl;
//     return 0;
// }



// sort 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }


    // asc sort 
    sort(arr,arr+n);

    // desc sort 
    sort(arr , arr+n, greater<int>());





    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " "; 
    }
    
    
    return 0;
}