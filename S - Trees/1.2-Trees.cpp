#include <iostream>
#include <queue>
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
void displayPreOrder(Node *root)
{
    if (root == NULL) // Base case
        return;
    cout << root->val << " ";     // Work -->PreOrder
    displayPreOrder(root->left);  // call 1
    displayPreOrder(root->right); // call 2
}
void displayInOrder(Node *root)
{
    if (root == NULL) // Base case
        return;
    displayInOrder(root->left);  // call 1
    cout << root->val << " ";    // Work -->InOrder
    displayInOrder(root->right); // call 2
}
void displayPostOrder(Node *root)
{
    if (root == NULL) // Base case
        return;

    displayPostOrder(root->left);  // call 1
    displayPostOrder(root->right); // call 2
    cout << root->val << " ";      // Work -->PostOrder
}
void printnthlevel(Node *root, int curr, int level)
{
    if (root == NULL)
        return;
    if (curr == level)
    {
        cout << root->val << " ";
        return;
    }
    printnthlevel(root->left, curr + 1, level);
    printnthlevel(root->right, curr + 1, level);
    /*
        printnthlevel(root->right, curr + 1, level); // reverse order
        printnthlevel(root->left, curr + 1, level);
    */
}
void levelOrderQueue(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (q.size() > 0)
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
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
    // DFS --> Depth first Search
    displayPreOrder(a); // 1 2 4 5 3 6 7  --> PreOrder -->root, left, order
    cout << endl;
    displayPostOrder(a); //  4 5 2 6 7 3 1 --> PostOrder --> left, right, root
    cout << endl;
    displayInOrder(a); //  4 2 5 1 6 3 7 --> InOrder --> left,root, right
    cout << endl;
    /*
                              1
                           2     3
                         4   5 6   7
    */
    int curr = 1;
    int level = 3;
    int i = 1;
    while (i <= level)
    {
        printnthlevel(a, curr, i);
        i++;
        cout << endl;
    }
    // drawback of recursion is callstack
    // T.C = O(n)-->n is no of node
    // S.C = O(h) ~ O(level+1) -->avg and wordt case
    //     = O(logn) --> best case
    //  1+2^1+2^2+2^3... --> O(logn)

    levelOrderQueue(a);
}