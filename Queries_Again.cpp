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

void printForward(Node *head)
{
    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printBackward(Node *tail)
{
    Node *temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int sizeFn(Node *head)
{
    Node *temp = head;
    int sz = 0;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
}

// Insert at any position (including tail)
void insertAtAny(Node *&head, Node *&tail, int position, int newValue)
{
    int sz = sizeFn(head);

    if (position > sz)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node *newNode = new Node(newValue);
    // insert head position
    if (position == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        printForward(head);
        printBackward(tail);
        return;
    }
    else if (position == sz)
    {
        // Insert at tail position
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        printForward(head);
        printBackward(tail);
        return;
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < position; i++)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL)
            temp->next->prev = newNode;

        temp->next = newNode;
        printForward(head);
        printBackward(tail);
    }
}

int main()
{
    int n;
    cin >> n;

    Node *head = NULL;
    Node *tail = NULL;

    while (n--)
    {
        int pos, val;
        cin >> pos >> val;
        insertAtAny(head, tail, pos, val);
        }

    return 0;
}
