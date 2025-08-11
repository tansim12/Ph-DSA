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

bool findValue(Node *root, int vl)
{
    if (!root)
        return false;
    if (root->value == vl)
        return true;

    if (root->value > vl)
        return findValue(root->left, vl);
    else
        return findValue(root->right, vl);
}

int main()
{
    Node *root = treeInput();
    int vl;
    cin >> vl;
    if(findValue(root, vl)){
        cout << "Yes";
    }else {
        cout << "NO";
    }
    return 0;
}