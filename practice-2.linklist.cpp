
//!  Take two singly linked lists as input and check if their sizes are same or not.

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

// // void printLinkList(Node *&head)
// // {
// //     Node *temp = head;
// //     if (temp == NULL)
// //     {
// //         /* code */
// //         return;
// //     }
// //     cout << temp->value << endl;
// //     printLinkList(temp->next);
// // }
// int lengthCount(Node *&head)
// {
//     Node *temp = head;
//     int count = 0;
//     while (temp != NULL)
//     {
//         /* code */
//         count++;
//         temp = temp->next;
//     }

//     return count;
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
//     Node *head1 = NULL;
//     Node *tail1 = NULL;
//     Node *head2 = NULL;
//     Node *tail2 = NULL;

//     int val1;
//     while (true)
//     {
//         /* code */
//         cin >> val1;
//         if (val1 == -1)
//         {
//             /* code */
//             break;
//         }
//         insertAtTail(head1, tail1, val1);
//     }
//     int val2;
//     while (true)
//     {
//         /* code */
//         cin >> val2;
//         if (val2 == -1)
//         {
//             /* code */
//             break;
//         }
//         insertAtTail(head2, tail2, val2);
//     }

//     int count1 = lengthCount(head1);
//     int count2 = lengthCount(head2);

//     cout << (count1 == count2 ? "YES" : "NO");

//     return 0;
// }

//! Take a singly linked list as input, then print the maximum value of them.

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

// void maxFn(Node *&head)
// {
//     Node *temp = head;
//     int maxValue = INT_MIN;
//     while (temp != NULL)
//     {
//         /* code */
//         if (temp->value > maxValue)
//         {
//             maxValue = temp->value;
//         }

//         temp = temp->next;
//     }

//     cout << maxValue;
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
//     Node *head1 = NULL;
//     Node *tail1 = NULL;

//     int val1;
//     while (true)
//     {
//         /* code */
//         cin >> val1;
//         if (val1 == -1)
//         {
//             /* code */
//             break;
//         }
//         insertAtTail(head1, tail1, val1);
//     }

//     maxFn(head1);

//     return 0;
// }


//! Take a singly linked list as input, then take q queries. In each query you will be given an index and value. You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.

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

void printLinkList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int lengthCount(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        /* code */
        count++;
        temp = temp->next;
    }

    return count;
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

void insertAny(Node *&head, int index, int newValue)
{

    Node *temp = head;
    Node *newNode = new Node(newValue);
    for (size_t i = 1; i < index; i++)
    {
        if (temp == NULL)
        {
            /* code */
            return;
        }
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAtHead(Node *&head, int newValue)
{
    Node *newNode = new Node(newValue);
    newNode->next = head;
    head = newNode;
};

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

    int n;
    cin >> n;
    while (n--)
    {
        /* code */
        int index, newValue;
        cin >> index >> newValue;
        int currentSize = lengthCount(head);

        if (index < 0 || index > currentSize)
        {
            cout << "Invalid" << endl;
            continue;
        }

        else if (index == 0)
        {
            // insert head
            insertAtHead(head, newValue);
        }
        else if (index == currentSize)
        {
            // insert tails
            insertAtTail(head, tail, newValue);
        }
        else
        {
            // insert any
            insertAny(head, index, newValue);
        }
        printLinkList(head);
    }

    return 0;
}