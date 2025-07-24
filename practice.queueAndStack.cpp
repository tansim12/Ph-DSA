// //! Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     stack<int> st;
//     queue<int> q;

//     int n;
//     cin >> n;
//     for (size_t i = 0; i < n; i++)
//     {
//         /* code */
//         int val;
//         cin >> val;
//         st.push(val);
//     }
//     int n2;
//     cin >> n2;

//     if (n != n2)
//     {
//         /* code */
//         cout << "NO";
//         return 0;
//     }

//     for (size_t i = 0; i < n2; i++)
//     {
//         /* code */
//         int val;
//         cin >> val;
//         q.push(val);
//     }

//     bool isNotEq = true;
//     while (!st.empty())
//     {
//         /* code */

//         if (st.top() != q.front())
//         {
//             /* code */
//             isNotEq = false;
//             break;
//         }
//         st.pop();
//         q.pop();
//     }
//     cout << (isNotEq ? "YES" : "NO");

//     return 0;
// }

//! Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     stack<int> st;
//     stack<int> st2;

//     int n;
//     cin >> n;
//     for (size_t i = 0; i < n; i++)
//     {
//         /* code */
//         int val;
//         cin >> val;
//         st.push(val);
//     }

//     while (!st.empty())
//     {
//         /* code */

//         int val = st.top();
//         st.pop();
//         st2.push(val);
//     }

//     while (!st2.empty())
//     {
//         cout << st2.top() << " " ;
//         st2.pop();
//     }

//     return 0;
// }


//! Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    queue<int> q2;
    stack<int> st;

    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        int val;
        cin >> val;
        q.push(val);
    }

    while (!q.empty())
    {
        /* code */

        int val = q.front();
        q.pop();
        st.push(val);
    }

    while (!st.empty())
    {
        /* code */

        int val = st.top();
        st.pop();
        q2.push(val);
    }

    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }

    return 0;
}