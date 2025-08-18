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

int nodeCount(Node *root)
{
    if (!root)
        return 0;
    int l = nodeCount(root->left);
    int r = nodeCount(root->right);
    return l + r + 1;
}

int depthCount(Node *root)
{
    if (!root)
        return 0;
    int l = depthCount(root->left);
    int r = depthCount(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = treeInput();
    int ct = nodeCount(root);
    int dpt = depthCount(root);

    int cal = pow(2,dpt)-1;
    if (ct == cal)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}