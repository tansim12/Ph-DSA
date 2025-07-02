// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int value;
//     Node *next;

//     Node(int value)
//     {
//         this->value = value;
//         this->next = NULL;
//     }
// };

// int main()
// {
//     Node a(10), b(20), c(30);

//     a.next = &b;
//     b.next = &c;

//     cout << a.next->next->value;
//     return 0;
// }

//! dynamic node 

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int main() {

    Node* head = new Node(10); // এইগুলা একেক্তা pointer return করে । 
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a ;
    a->next = b ;

    cout << a->value ;
    
    return 0;
}