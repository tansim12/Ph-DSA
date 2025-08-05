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

void printTree(Node *root)
{

    if (!root)
    {
        cout << "Empty binary";
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        /* code */
        Node *frontNode = q.front();
        q.pop();

        cout << frontNode->value << " ";

        if (frontNode->left)
            q.push(frontNode->left);
        if (frontNode->right)
            q.push(frontNode->right);
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

int maxHeight(Node *root)
{

    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 0;

    int leftCount = maxHeight(root->left);
    int rightCount = maxHeight(root->right);

    return max(leftCount, rightCount) + 1;
}

int main()
{

    Node *root = treeInput();
    // printTree(root);
    cout << maxHeight(root);
    return 0;
}