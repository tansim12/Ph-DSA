
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

int findIndexFn(Node *&head,int findNumber)
{
    Node *temp = head;
    int count = 0 ;
    while (temp != NULL)
    {
        /* code */
        if (temp->value == findNumber)
        {
            /* code */
            return count;
        }
        count++;
        temp = temp->next;
    }

    return -1; 
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
    int n;
    cin >> n;
    while (n--)
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
        int findNumber ;
        cin >> findNumber;

        int index = findIndexFn(head,findNumber);
        cout << index << endl ;
        
    }


    return 0;
}
