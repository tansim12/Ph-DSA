// #include <bits/stdc++.h>
// using namespace std;

// void fn(int* &p)
// {

//     cout << "fn-- p>" << &p << endl;
// };

// int main()
// {
//     int x = 10;
//     int *p = &x;
//     fn(p);
//     cout << "main--p>" << &p << endl;
//     return 0;
// }

// //! insertAtHead

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

// void insertAtHead(Node* &head, int newValue)
// {
//     Node *newNode = new Node(newValue);
//     newNode->next = head;
//     head = newNode;
// };

// void printLinkList(Node *head)
// {
//     Node *temp = head;

//     while (temp != NULL)
//     {
//         /* code */
//         cout << temp->value << endl;
//         temp = temp->next;
//     }
// }

// int main()
// {

//     Node *head = new Node(10);
//     Node *a = new Node(20);
//     Node *b = new Node(30);
//     Node *c = new Node(40);

//     head->next = a; // set pointer by next
//     a->next = b;
//     b->next = c;

//     insertAtHead(head, 152);
//     printLinkList(head);
//     return 0;
// }

//! insertAtHead

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

// void insertAtHead (Node* &head,int newValue){

//     Node* newNode = new Node(newValue);
//     newNode->next = head;
//     head = newNode;
// }

// void printLinkList(Node *head)
// {
//     Node *temp = head;

//     while (temp != NULL)
//     {
//         /* code */
//         cout << temp->value << endl;
//         temp = temp->next;
//     }
// }

// int main()
// {

//     Node *head = new Node(10);
//     Node *a = new Node(20);
//     Node *b = new Node(30);
//     Node *c = new Node(40);

//     head->next = a; // set pointer by next
//     a->next = b;
//     b->next = c;

//     insertAtHead(head,69);
//     printLinkList(head);
//     return 0;
// }

//! insert tail

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

void insertTail(Node *&head, int newValue)
{
    Node *newNode = new Node(newValue);

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp কে last node এ আনতে হবে । এখন last node এ আছে । 
    temp->next = newNode;
}

void printLinkList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        /* code */
        cout << temp->value << endl;
        temp = temp->next;
    }
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a; // set pointer by next
    a->next = b;
    b->next = c;

    insertTail(head, 69);
    insertTail(head, 49);
    printLinkList(head);
    return 0;
}