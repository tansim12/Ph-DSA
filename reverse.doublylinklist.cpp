#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void printForword(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        /* code */
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printBackword(Node *&tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        /* code */
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

// insert at tail
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

    Node *temp = tail;
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void reverseDoubly(Node *&head, Node *&tail)
{

    for (Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
    {
        /* code */
        swap(i->value, j->value);
    }
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
        // insert at tail
        insertAtTail(head, tail, val);
    }

    reverseDoubly(head, tail);
    printForword(head);
    // printBackword(tail);
    return 0;
}