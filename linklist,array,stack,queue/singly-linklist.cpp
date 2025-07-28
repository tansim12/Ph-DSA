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

int main()
{

    Node *head = new Node(10); // এইগুলা একেক্তা pointer return করে ।
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a; // set pointer by next
    a->next = b;
    b->next = c;

    Node* temp = head; // head কখনো null করা যাবে না । 

    while (temp != NULL)
    {
        /* code */
        cout << temp->value << endl;
        temp = temp->next;
    }

    return 0;
}