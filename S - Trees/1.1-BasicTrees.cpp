// Traversing in a tree is done by depth first search and breadth first search algorithm.
// It has no loop and no circuit.
// It has no self-loop.
// 1.Binary Trees -> 0,1,2 children [upto 2 child nodes]
//   Every node has a value & its left child's address, right child address.
// 2.Binary Search Trees -> Binary tree with some special property.
// 3.AVL Trees: Balanced tree.
/*

Applications of tree Data Structure
--> Hierarchical data structure
--> Searching efficiency
--> Sorting
--> Dynamic Dta
--> Efficient Insertion and Deletion
--> Easy to implement

*/
/*
1. Full Binary Tree (0 or 2)
2. Perfect Binary Tree--> Every node (except the last leaf node,) has 2 child nodes.
3. Complete binary tree-->
4. Balanced Binary Tree--> for every node, the difference between the level of LST & RST should be almost 1.
5. Degenerate and Skewed Binary Trees.--> 0 and 1 child
*/
#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void displayTree(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
}

int sumTree(Node *root)
{
    if (root == NULL)
        return 0;
    return root->val + sumTree(root->left) + sumTree(root->right);
}
int count(Node *root)
{
    if (root == NULL)
        return 0;

    return 1 + count(root->left) + count(root->right);
}
int MaxValue(Node *root)
{
    if (root == NULL)
        return INT8_MIN;

    return max(root->val, max(MaxValue(root->left), MaxValue(root->right)));
}
int MinVal(Node *root)
{
    if (root == NULL)
        return INT16_MAX;

    return min(root->val, min(MinVal(root->left), MinVal(root->right)));
}
int product(Node *root)
{
    if (root == NULL)
        return 1;

    return root->val * product(root->left) * product(root->right);
}
int MaxLevel(Node *root)
{
    if (root == NULL)
        return 0;

    return 1 + max(MaxLevel(root->left), MaxLevel(root->right));
}
int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displayTree(a);
    cout << sumTree(a) << endl;
    cout << count(a) << endl;
    cout << MaxValue(a) << endl;
    cout << MinVal(a) << endl;
    cout << product(a) << endl;
    cout << MaxLevel(a) << endl;
}