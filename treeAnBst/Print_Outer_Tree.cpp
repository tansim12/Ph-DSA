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

Node *treeInput()
{

    int val;
    cin >> val;
    Node *root = new Node(val);
    if (val == -1)
        return root = NULL;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        /* code */
        Node *frontNode = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *newL, *newR;

        if (l == -1)
            frontNode->left = NULL;
        else
            frontNode->left = new Node(l);

        if (r == -1)
            frontNode->right = NULL;
        else
            frontNode->right = new Node(r);

        if (frontNode->left)
            q.push(frontNode->left);
        if (frontNode->right)
            q.push(frontNode->right);
    }

    return root;
}

void leftPrint(Node *rootLeft)
{
    if (!rootLeft)
        return;

    leftPrint(rootLeft->left);
    if (!rootLeft->left)
    {
        leftPrint(rootLeft->right);
    }
    cout << rootLeft->value << " ";
}

void rightPrint(Node *rightRoot)
{
    if (!rightRoot)
        return;

    cout << rightRoot->value << " ";
    rightPrint(rightRoot->right);
    if (!rightRoot->right)
    {
        rightPrint(rightRoot->left);
    }
}

int main()
{
    Node *root = treeInput();

    if (root->left)
        leftPrint(root->left);

    cout << root->value << " " ;

    
    if (root->right)
        rightPrint(root->right);

    return 0;
}