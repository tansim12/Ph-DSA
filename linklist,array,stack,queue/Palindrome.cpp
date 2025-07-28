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

    Node *temp1 = head;
    Node *temp2 = tail;
    bool isPlan = true;
    while (temp1 != temp2 && temp1->prev != temp2)
    {

        if (temp1->value != temp2->value)
        {
            isPlan = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->prev;
    }

    cout << (isPlan ? "YES" : "NO");

    return 0;
}