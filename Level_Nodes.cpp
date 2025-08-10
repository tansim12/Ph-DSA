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

int depthCount(Node *root)
{
    if (!root)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 0;
    int l = depthCount(root->left);
    int r = depthCount(root->right);
    return max(l, r) + 1;
}

vector<pair<Node *, int>> v;

void valueStore(Node *root, int level, int targetLevel)
{
    if (!root)
        return;

    if (level == targetLevel)
        v.push_back({root, level});

    valueStore(root->left, level + 1,targetLevel);
    valueStore(root->right, level + 1,targetLevel);
}

int main()
{
    Node *root = treeInput();
    int level;
    cin >> level;

    int dpt = depthCount(root);

    if (dpt < level)
    {
        cout << "Invalid";
        return 0;
    }

    valueStore(root,0,level);

    for (auto &&i : v)
    {
        cout << i.first->value << " " ; 
    }
    

    return 0;
}