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
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(20);
    pq.push(21);
    pq.push(15);
    pq.push(2);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    return 0;
}