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
        Node *frontValue = q.front();
        q.pop();

        cout << frontValue->value << " ";

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

void insetNode(Node *&root, int newValue)
{

    if (!root)
    {
        root = new Node(newValue);
    }
    if (root->value > newValue)
    {

        if (root->left == NULL)
            root->left = new Node(newValue);
        else
            insetNode(root->left, newValue);
    }
    else
    {
        if (root->right == NULL)
            root->right = new Node(newValue);
        else
            insetNode(root->right, newValue);
    }
}

int main()
{
    Node *root = treeInput();
    int vl;
    cin >> vl;

    insetNode(root, vl);

    levelOrderPrint(root);
}