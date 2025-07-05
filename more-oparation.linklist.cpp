// //! problem wise input here
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

// void insertAtTail(Node *&head, Node *&tail, int newValue)
// {
//     Node *newNode = new Node(newValue);
//     if (head == NULL)
//     {
//         /* code */
//         head = newNode;
//         tail = newNode;
//         return;
//     }

//     tail->next = newNode;
//     tail = newNode;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     int val;
//     while (true)
//     {
//         /* code */
//         cin >> val;
//         if (val == -1)
//         {
//             /* code */
//             break;
//         }
//         insertAtTail(head, tail, val);
//     }

//     printLinkList(head);

//     return 0;
// }


//! reverse print with recarsion
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
     if (temp == NULL)
    {
        /* code */
        return;
    }
    printLinkList(temp->next);
    cout << temp->value << endl;
}

void insertAtTail(Node *&head, Node *&tail, int newValue)
{
    Node *newNode = new Node(newValue);
    if (head == NULL)
    {
        /* code */
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        /* code */
        cin >> val;
        if (val == -1)
        {
            /* code */
            break;
        }
        insertAtTail(head, tail, val);
    }

    printLinkList(head);

    return 0;
}