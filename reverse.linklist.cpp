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


// void printLinkList(Node *&head)
// {
//     Node *temp = head;
//      if (temp == NULL)
//     {
//         /* code */
//         return;
//     }
//     printLinkList(temp->next);
//     cout << temp->value << endl;
// }


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

void reverseLinklist(Node *&head,Node *temp)
{
     if (temp->next == NULL)
    {
        head = temp; // last এ head চলে আসলো । 
        return;
    }
    reverseLinklist(head,temp->next);
    temp->next->next = temp;
    temp->next = NULL;
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

    reverseLinklist(head,head);

    printLinkList(head);

    return 0;
}