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

int sumWithOutLeafNode(Node *root)
{
    if (!root)
        return 0;
    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    int l = sumWithOutLeafNode(root->left);
    int r = sumWithOutLeafNode(root->right);
    return root->value + l + r;
}

int main()
{
    Node *root = treeInput();
    cout << sumWithOutLeafNode(root) ;
    
    return 0;
}