
// //! using vector
// #include <bits/stdc++.h>
// using namespace std;

// class MyStack
// {
// public:
//     vector<int> v;

//     void push(int val)
//     {
//         v.push_back(val);
//     };
//     void pop()
//     {
//         v.pop_back();
//     };
//     int top()
//     {
//         return v.back();
//     };
//     int size()
//     {
//         return v.size();
//     };
//     bool empty()
//     {
//         return v.empty();
//     };
// };

// int main()
// {

//     MyStack st;
//     int n;
//     cin >> n;
//     for (size_t i = 0; i < n; i++)
//     {
//         /* code */
//         int val;
//         cin >> val;
//         st.push(val);
//     }

//     while(!st.empty()){
//         cout << st.top() << endl ;
//         st.pop();
//     }

//     return 0;
// }

//! using list
// #include <bits/stdc++.h>
// using namespace std;
// class MyStack
// {
// public:
//     list<int> l;

//     void push(int val)
//     {
//         l.push_back(val);
//     };
//     void pop()
//     {
//         l.pop_back();
//     };
//     int top()
//     {
//         return l.back();
//     };
//     int size()
//     {
//         return l.size();
//     };
//     bool empty()
//     {
//         return l.empty();
//     };
// };

// int main()
// {

//     MyStack st;
//     int n;
//     cin >> n;
//     for (size_t i = 0; i < n; i++)
//     {
//         /* code */
//         int val;
//         cin >> val;
//         st.push(val);
//     }

//     while(!st.empty()){
//         cout << st.top() << endl ;
//         st.pop();
//     }

//     return 0;
// }



//! using stack stl
#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> st;
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        int val;
        cin >> val;
        st.push(val);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}