
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
void deleteAtAny(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        return;
    }

    // delete head by position 0
    if (position == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;

        if (head == NULL)
            tail = NULL; 
        return;
    }

    Node *temp = head;
    for (int i = 1; i < position; i++)
    {
        if (temp == NULL || temp->next == NULL)
        {
            return;
        }
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        return;
    }

    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;

    if (deleteNode == tail)
    {
        tail = temp;
    }

    delete deleteNode;
}

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
    newNode->next = head;
    head = newNode;
};

int main()
{
    int n;
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;

    while (n--)
    {
        /* code */
        int action, valueOrPosition;
        cin >> action >> valueOrPosition;

        if (action == 0)
        {
            // insert head
            insertAtHead(head, tail, valueOrPosition);
        }

        if (action == 1)
        {
            // insert tail
            insertAtTail(head, tail, valueOrPosition);
        }
        if (action == 2)
        {
            // delete any position
            deleteAtAny(head, tail, valueOrPosition);
        }

        printLinkList(head);
    }

    return 0;
}