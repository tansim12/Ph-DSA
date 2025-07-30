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

// int main() {

//     Node* root = new Node(10);
//     Node* a = new Node(20);
//     Node* b = new Node(30);
//     Node* c = new Node(40);
//     Node* d = new Node(50);
//     Node* e = new Node(60);
//     root->left = a ;
//     root->right = b ;

//     a->left = c ;

//     b->left = d;
//     b->right = e;

//     cout << root->left->left->value ;

//     return 0;
// }

//! pre order
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

void preOrder(Node *root)
{
    if (root == NULL)
        return;
        
        //* pre order ( root -> left -> right -> )
        // cout << root->value << " ";
        // preOrder(root->left);
        // preOrder(root->right);
        
        //* in order  ( left -> root -> right -> )
        // preOrder(root->left);
        // cout << root->value << " ";
        // preOrder(root->right);
        
        //* post order   ( left -> right -> root -> )
        preOrder(root->left);
        preOrder(root->right);
        cout << root->value << " ";
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

    preOrder(root);

    return 0;
}