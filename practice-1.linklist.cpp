//! count linklist element
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

// int countFn(Node *head)
// {
//     Node *temp = head;
//     int count = 0;
//     while (temp != NULL)
//     {
//         /* code */
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// int main()
// {

//     Node *head = new Node(10);
//     Node *a = new Node(20);
//     Node *b = new Node(30);
//     Node *c = new Node(40);

//     head->next = a;
//     a->next = b;
//     b->next = c;

//   int count = countFn(head);

//     cout << count;

//     return 0;
// }

//! isfound value by link list
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

// void isFound(Node *head)
// {
//     Node *temp = head;
//     bool isFoundValue = false;
//     set<int> store;
//     while (temp != NULL)
//     {
//         /* code */

//         if (store.count(temp->value))
//         {
//             /* code */
//             isFoundValue = true;
//             break;
//         }
//         store.insert(temp->value);
//         temp = temp->next;
//     }

//     cout << (isFoundValue ? "YES" : "NO");
// }

// int main()
// {

//     Node *head = new Node(10);
//     Node *a = new Node(20);
//     Node *b = new Node(30);
//     Node *c = new Node(40);
//     Node *d = new Node(90);
//     Node *e = new Node(90);
//     Node *f = new Node(90);

//     head->next = a;
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     e->next = f;

//     isFound(head);

//     return 0;
// }





//! Create a singly linked list and print the middle element. If there are multiple values in the middle print both.

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

// void printMiddleValue(Node *head)
// {
//     Node *temp = head;
//     int count = 0;
//     while (temp != NULL)
//     {
//         /* code */
//         count++;
//         temp = temp->next;
//     }

//     int middle = count/2;
//     Node *newTem = head;
//     for (size_t i = 1; i < middle; i++)
//     {
//         /* code */
//         newTem = newTem->next;
//     }

    
 
//     if (count%2 != 0)
//     {
//         /* code */
//         cout << newTem->next->value ;
//     }else {
//         cout << newTem->value  << " " << newTem->next->value;
//     }
    
    
    
// }

// int main()
// {

//     Node *head = new Node(1);
//     Node *a = new Node(2);
//     Node *b = new Node(3);
//     Node *c = new Node(4);
//     Node *d = new Node(5);

//     head->next = a;
//     a->next = b;
//     b->next = c;
//     c->next = d;

//     printMiddleValue(head);

//     return 0;
// }
