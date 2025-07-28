// //! problem wise input here
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int value;
//     Node *next;

//     Node(int value)
//     {
//         this->value = value;
//         this->next = NULL;
//     }
// };

// void printLinkList(Node *&head)
// {

//     Node *temp = head;
//     while (temp != NULL)
//     {
//         /* code */
//         cout << temp->value << endl;
//         temp = temp->next;
//     }
// }

// void insertAtTail(Node *&head, Node *&tail, int newValue)
// {
//     Node *newNode = new Node(newValue);
//     if (head == NULL)
//     {
//         /* code */
//         head = newNode;
//         tail = newNode;
//         return;
//     }

//     tail->next = newNode;
//     tail = newNode;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     int val;
//     while (true)
//     {
//         /* code */
//         cin >> val;
//         if (val == -1)
//         {
//             /* code */
//             break;
//         }
//         insertAtTail(head, tail, val);
//     }

//     printLinkList(head);

//     return 0;
// }

//! reverse print with recursion
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int value;
//     Node *next;

//     Node(int value)
//     {
//         this->value = value;
//         this->next = NULL;
//     }
// };

// void printLinkList(Node *&head)
// {
//     Node *temp = head;
//      if (temp == NULL)
//     {
//         /* code */
//         return;
//     }
//     cout << temp->value << endl;
//     printLinkList(temp->next);
// }

// void insertAtTail(Node *&head, Node *&tail, int newValue)
// {
//     Node *newNode = new Node(newValue);
//     if (head == NULL)
//     {
//         /* code */
//         head = newNode;
//         tail = newNode;
//         return;
//     }

//     tail->next = newNode;
//     tail = newNode;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     int val;
//     while (true)
//     {
//         /* code */
//         cin >> val;
//         if (val == -1)
//         {
//             /* code */
//             break;
//         }
//         insertAtTail(head, tail, val);
//     }

//     printLinkList(head);

//     return 0;
// }





//! delete head , delete any , delete tail , sort linklist
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
    if (temp == NULL)
    {
        /* code */
        return;
    }
    cout << temp->value << endl;
    printLinkList(temp->next);
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

void deleteHead(Node *&head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
}
void deleteAtAny(Node *&head, int position)
{
    Node *temp = head;
    for (size_t i = 1; i < position; i++)
    {
        /* code */
        if (temp == NULL)
        {
            /* code */
            return;
        }
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;

}
void deleteAtTail(Node *&head,Node *&tail, int position)
{
    Node *temp = head;
    for (size_t i = 1; i < position; i++)
    {
        /* code */
        if (temp == NULL)
        {
            /* code */
            return;
        }
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
    tail = temp;

}

void sortByLinklist(Node *&head)
{
    //* main concept
    // for (size_t i = 0; i < n; i++)
    // {
    //     /* code */
    //     for (size_t j = i+1; j < n; j++)
    //     {
    //         /* code */
    //         if (i>j)
    //         {
    //             /* code */
    //             swap(i,j);
    //         }
            
    //     }
        
    // }


     for (Node* i = head; i->next != NULL; i= i->next) // i->next != NULL; মানে last er আগে প্রজন্তু যাবে । 
    {
        /* code */
        for (Node* j = i->next; j != NULL; j = j->next) // j != NULL মানে লাস্ট প্রজন্ত যাবে । 
        {
            /* code */
            if (i->value > j->value)
            {
                /* code */
                swap(i->value, j->value);
            }
        }
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
        insertAtTail(head, tail, val);
    }
    //* delete head
    // deleteHead(head);


    //* delete at any 
    // deleteAtAny(head,3);


    //* delete at tail 
    // deleteAtTail(head,tail,6);


    //* Sort by linklist
    sortByLinklist(head);

    //* Print with recursion 
    printLinkList(head);

    return 0;
}