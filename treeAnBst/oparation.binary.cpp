
// //! level order print
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int value;
//     Node *left;
//     Node *right;

//     Node(int value)
//     {
//         this->value = value;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// void levelOrderPrint(Node *root)
// {
//     queue<Node *> q;

//     q.push(root);
//     while (!q.empty())
//     {
//         /* code */
//         //* ১। বের করে আনলাম ।
//         Node *frontValue = q.front();
//         q.pop();

//         //* ২। ঐ node নিয়ে কাজ করলাম  ।
//         cout << frontValue->value << " ";

//          //* ৩। ঐ node এর children গুলা push করলাম  ।
//         if (frontValue->left)
//         {
//             /* code */
//             q.push(frontValue->left);
//         }
//         if (frontValue->right)
//         {
//             /* code */
//             q.push(frontValue->right);
//         }
//     }
// }

// int main()
// {

//     Node *root = new Node(10);
//     Node *a = new Node(20);
//     Node *b = new Node(30);
//     Node *c = new Node(40);
//     Node *d = new Node(50);
//     Node *e = new Node(60);
//     root->left = a;
//     root->right = b;

//     a->left = c;

//     b->left = d;
//     b->right = e;

//     levelOrderPrint(root);

//     return 0;
// }

// //! input tree
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int value;
//     Node *left;
//     Node *right;

//     Node(int value)
//     {
//         this->value = value;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// void levelOrderPrint(Node *root)
// {
//     queue<Node *> q;

//     q.push(root);
//     while (!q.empty())
//     {
//         /* code */
//         //* ১। বের করে আনলাম ।
//         Node *frontValue = q.front();
//         q.pop();

//         //* ২। ঐ node নিয়ে কাজ করলাম  ।
//         cout << frontValue->value << " ";

//         //* ৩। ঐ node এর children গুলা push করলাম  ।
//         if (frontValue->left)
//         {
//             /* code */
//             q.push(frontValue->left);
//         }
//         if (frontValue->right)
//         {
//             /* code */
//             q.push(frontValue->right);
//         }
//     }
// }

// Node *inputTree()
// {
//     int val;
//     cin >> val;
//     Node *root = new Node(val);
//     if (val == -1)
//         root = NULL;
//     queue<Node *> q;
//     if (root)
//         q.push(root);

//     while (!q.empty())
//     {
//         /* code */
//         //* 1. ber kore ana
//         Node *frontNode = q.front();
//         q.pop();

//         //* 2. kaj kora
//         int l, r;
//         cin >> l >> r;
//         Node *newL, *newR;

//         if (l == -1)
//             newL = NULL;
//         else
//             newL = new Node(l);

//         if (r == -1)
//             newR = NULL;
//         else
//             newR = new Node(r);

//         frontNode->left = newL;
//         frontNode->right = newR;

//         //* 3. child push kora
//         if (frontNode->left)
//             q.push(frontNode->left);
//         if (frontNode->right)
//             q.push(frontNode->right);
//     }
//     return root;
// }

// int main()
// {

//     Node *root = inputTree();
//     levelOrderPrint(root);

//     return 0;
// }

//! print node count, leaf node count by recursion
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

//* node count by level wise
// int countNode(Node *root)
// {
//     int cnt = 0;
//     if (root == NULL)
//     {
//         /* code */
//         return 0;
//     }

//     queue<Node *> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         /* code */
//         Node *frontValue = q.front();
//         q.pop();

//         cnt++;

//         if (frontValue->left)
//         {
//             /* code */
//             q.push(frontValue->left);
//         }
//         if (frontValue->right)
//         {
//             /* code */
//             q.push(frontValue->right);
//         }
//     }

//     return cnt;
// }

//* count by recursion
// int countNode(Node *root)
// {
//     if (!root)
//         return 0;

//     int totalLeftNode = countNode(root->left);
//     int totalRightNode = countNode(root->right);

//     return (totalLeftNode + totalRightNode);
// }


//* count leaf node by recursion
//* count by recursion
int countLeafNodeNode(Node *root)
{
    if (!root)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    int totalLeftNode = countLeafNodeNode(root->left);
    int totalRightNode = countLeafNodeNode(root->right);

    return (totalLeftNode + totalRightNode);
}

Node *inputTree()
{
    int val;
    cin >> val;
    Node *root = new Node(val);
    if (val == -1)
        root = NULL;
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        /* code */
        //* 1. ber kore ana
        Node *frontNode = q.front();
        q.pop();

        //* 2. kaj kora
        int l, r;
        cin >> l >> r;
        Node *newL, *newR;

        if (l == -1)
            newL = NULL;
        else
            newL = new Node(l);

        if (r == -1)
            newR = NULL;
        else
            newR = new Node(r);

        frontNode->left = newL;
        frontNode->right = newR;

        //* 3. child push kora
        if (frontNode->left)
            q.push(frontNode->left);
        if (frontNode->right)
            q.push(frontNode->right);
    }
    return root;
}

int main()
{

    Node *root = inputTree();

    // cout << countNode(root);
    cout << countLeafNodeNode(root);

    return 0;
}