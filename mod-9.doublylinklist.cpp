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

// insert at head
void insertAtHead(Node *&head, Node *&tail, int newValue)
{
    Node *newNode = new Node(newValue);
    if (head == NULL)
    {
        /* code */
        head = newNode;
        tail = newNode;
        return;
    }
    Node *temp = head;
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
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

// insert at any position
//! But if position was tail then insertAtAny not working (array length যদি 3 hoy তাইলে 4 position এ insert করা যাবে না)
void insertAtAny(Node *&head, Node *&tail, int position, int newValue)
{

    Node *newNode = new Node(newValue);
    if (head == NULL)
    {
        /* code */
        head = newNode;
        tail = newNode;
        return;
    }

    Node *temp = head;

    if (position == 0)
    {
        /* code */
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        return;
    }

    for (size_t i = 1; i < position; i++)
    {
        /* code */
        temp = temp->next;
        if (temp == NULL)
        {
            /* code */
            return;
        }

    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;
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

    // insert At any
    insertAtAny(head, tail, 6, 96);

    printForword(head);
    printBackword(tail);
    return 0;
}