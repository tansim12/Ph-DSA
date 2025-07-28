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

void printLinkList(Node *&head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        /* code */
        cout << temp->value << endl;
        temp = temp->next;
    }
}

// insert any where
void insertByAny(Node *&head, int newValue, int index)
{
    Node *newNode = new Node(newValue);

    // check if linklist null or no value here
    if (head == NULL)
    {
        /* code */
        head = newNode;
        return;
    }

    Node *temp = head;
    for (size_t i = 0; i < index - 1; i++)
    {
        /* code */
        temp = temp->next;
    }
    // currently temp is index-1 position.
    // আগে লাস্টের node এর সাথে add করতে হবে তার পরে first এর টার সাথে add করতে হবে ।
    newNode->next = temp->next; // connect last
    temp->next = newNode;       // connect first
}

int main()
{
    // Node *head = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    // insert any
    insertByAny(head, 80, 2);
    insertByAny(head, 81, 4);

    // print here
    printLinkList(head);

    return 0;
}