
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



//!Take a singly linked list as input, then print the maximum value of them.

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

void maxFn(Node *&head)
{
    Node *temp = head;
    int maxValue = INT_MIN;
    while (temp != NULL)
    {
        /* code */
        if (temp->value > maxValue)
        {
            maxValue = temp->value;
        }

        temp = temp->next;
    }

    cout << maxValue;
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
    Node *head1 = NULL;
    Node *tail1 = NULL;

    int val1;
    while (true)
    {
        /* code */
        cin >> val1;
        if (val1 == -1)
        {
            /* code */
            break;
        }
        insertAtTail(head1, tail1, val1);
    }

    maxFn(head1);

    return 0;
}