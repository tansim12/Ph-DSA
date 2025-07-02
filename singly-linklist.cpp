#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *nodePointer;
};

int main()
{
    Node a,b,c ;
    a.value = 10;
    b.value = 20;
    c.value = 30;

    a.nodePointer = &b;
    b.nodePointer = &c;
    c.nodePointer = NULL;

    cout << a.nodePointer->nodePointer->value ;
    return 0;
}