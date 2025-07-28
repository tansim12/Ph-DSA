
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

int listSize(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
       count++;
        temp = temp->next;
    }
    return count ;
   
}

bool compareFn(Node *head1 , Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    bool isCom = true ;
    while (temp1 != NULL)
    {

        if (temp1->value != temp2->value)
        {
            /* code */
            isCom = false ;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return isCom;

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
    Node *head2 = NULL;
    Node *tail2 = NULL;

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
    int val2;
    while (true)
    {
        /* code */
        cin >> val2;
        if (val2 == -1)
        {
            /* code */
            break;
        }
        insertAtTail(head2, tail2, val2);

    }

    int size1 = listSize(head1);
    int size2 = listSize(head2);
    if (size1 != size2)
    {
        /* code */
        cout << "NO";
        return 0;
    }
    
    bool isCom = compareFn(head1,head2);

    cout << (isCom? "YES": "NO");

    return 0;
}