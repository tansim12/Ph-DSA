#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string value;
    Node *next;
    Node *prev;

    Node(string value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

// insert at tail
void insertAtTail(Node *&head, Node *&tail, string newValue)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string val;
    while (true)
    {
        /* code */
        cin >> val;
        if (val == "end")
        {
            /* code */
            break;
        }
        // insert at tail
        insertAtTail(head, tail, val);
    }

    Node *temp = head;
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        string type;
        cin >> type;
        /* code */
        if (type == "visit")
        {
            /* code */
            string findString;
            cin >> findString;

            Node *findTemp = head;
            bool isFind = false;
            while (findTemp != NULL)
            {
                if (findTemp->value == findString)
                {
                    isFind = true;
                    temp = findTemp; 
                    break;
                }
                findTemp = findTemp->next;
            }
            cout << (isFind ? temp->value : "Not Available") << endl;
        }
        else if (type == "prev")
        {
            if (temp->prev != NULL)
            {
                temp = temp->prev;
                cout << temp->value << endl;
            }

            else
                cout << "Not Available" << endl;
        }
        else if (type == "next")
        {
            if (temp->next != NULL)
            {
                temp = temp->next;
                cout << temp->value << endl;
            }
            else
                cout << "Not Available" << endl;
        }
    }

    return 0;
}