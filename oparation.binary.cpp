
//! level order print
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderPrint(Node *root)
{
    queue<Node *> q;

    q.push(root);
    while (!q.empty())
    {
        /* code */
        //* ১। বের করে আনলাম ।
        Node *frontValue = q.front();
        q.pop();

        //* ২। ঐ node নিয়ে কাজ করলাম  ।
        cout << frontValue->value << " ";


         //* ৩। ঐ node এর children গুলা push করলাম  ।
        if (frontValue->left)
        {
            /* code */
            q.push(frontValue->left);
        }
        if (frontValue->right)
        {
            /* code */
            q.push(frontValue->right);
        }
    }
}

int main()
{

    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    root->left = a;
    root->right = b;

    a->left = c;

    b->left = d;
    b->right = e;

    levelOrderPrint(root);

    return 0;
}