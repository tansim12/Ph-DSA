
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

void removeDuplicate(Node *&head)
{
    for (Node *i = head; i != NULL && i->next != NULL; i = i->next)
    {
        /* code */
        Node *previous = i;
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            /* code */
            if (i->value == j->value)
            {
                /* code */
                Node *deleteNode = j;
                previous->next = j->next;
                j = previous; 
                delete deleteNode;
            }
            else
            {
                previous = j;
            }
        }
    }
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            /* code */
            break;
        }

        insertAtTail(head, tail, val);
    }
    removeDuplicate(head);
    printLinkList(head);

    return 0;
}