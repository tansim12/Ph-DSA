
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

void difFn(Node *&head)
{
    Node *temp = head;
    int maxValue = INT_MIN;
    int minValue = INT_MAX;
    while (temp != NULL)
    {
        /* code */
        if (temp->value > maxValue)
        {
            maxValue = temp->value;
        }
        if (temp->value < minValue)
        {
            minValue = temp->value;
        }

        temp = temp->next;
    }

    cout << (abs(maxValue-minValue));
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
        insertAtTail(head, tail, val1);
    }

    difFn(head);

    return 0;
}
