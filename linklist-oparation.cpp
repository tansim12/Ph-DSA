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

// //! insert tail

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

// void insertTail(Node *&head, int newValue)
// {
//     Node *newNode = new Node(newValue);

//     Node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     // temp কে last node এ আনতে হবে । এখন last node এ আছে ।
//     temp->next = newNode;
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

//     insertTail(head, 69);
//     insertTail(head, 49);
//     printLinkList(head);
//     return 0;
// }

// //! insert head and tail both
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

// void printLinkList(Node *&head)
// {

//     Node *temp = head;
//     while (temp != NULL)
//     {
//         /* code */
//         cout << temp->value << endl;
//         temp = temp->next;
//     }
// }

// // insert head
// void insertAtHead(Node* &head,int newValue){
//     Node* newNode = new Node(newValue);
//     newNode->next = head;
//     head = newNode;
// }

// // insert tail
// void insertAtTail(Node* &head,int newValue){
//     Node* newNode = new Node(newValue);

//     // check if linklist null or no value here
//     if (head == NULL)
//     {
//         /* code */
//         head = newNode;
//         return;
//     }

//     Node* temp = head ;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;

// }

// int main()
// {
//     // Node *head = NULL;
//     Node *head = new Node(10);
//     Node *a = new Node(20);
//     Node *b = new Node(30);

//     head->next = a;
//     a->next = b;

//     // insert at head
//     insertAtHead(head,52);
//     insertAtHead(head,60);

//     // insert at tail
//     insertAtTail(head,80);
//     insertAtTail(head,90);

//     // print here
//     printLinkList(head);

//     return 0;
// }

//! insert any where
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

void printLinkList(Node *&head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        /* code */
        cout << temp->value << endl;
        temp = temp->next;
    }
}

// insert any where
void insertByAny(Node *&head, int newValue, int index)
{
    Node *newNode = new Node(newValue);

    // check if linklist null or no value here
    if (head == NULL)
    {
        /* code */
        head = newNode;
        return;
    }

    Node *temp = head;
    for (size_t i = 0; i < index - 1; i++)
    {
        /* code */
        temp = temp->next;
    }
    // currently temp is index-1 position.
    // আগে লাস্টের node এর সাথে add করতে হবে তার পরে first এর টার সাথে add করতে হবে ।
    newNode->next = temp->next; // connect last
    temp->next = newNode;       // connect first
}

int main()
{
    // Node *head = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    // insert any
    insertByAny(head, 80, 2);

    // print here
    printLinkList(head);

    return 0;
}