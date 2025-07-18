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
Node *construct(int arr[], int n)
{
    queue<Node *> q;  // Queue to manage the nodes during construction
    Node *root = new Node(arr[0]);  // Create the root node from the first element in the array
    q.push(root);  // Push the root node onto the queue
    int i = 1;  // Index to traverse the array
    int j = 2;  // Index to track the positions of left and right children in the array

    // Process the array elements to construct the binary tree
    while (q.size() > 0 && i < n)
    {
        Node *temp = q.front();  // Get the front node from the queue
        q.pop();  // Remove the front node from the queue

        Node *l;  // Pointer for the left child node
        Node *r;  // Pointer for the right child node

        // Create a new node for the left child if the array element is not INT8_MIN
        if (arr[i] != INT8_MIN)
        {
            l = new Node(arr[i]);
        }
        else
        {
            l = NULL;  // Set to NULL if the array element is INT8_MIN
        }

        // Create a new node for the right child if it exists and the array element is not INT8_MIN
        if (j != n && arr[j] != INT8_MIN)
        {
            r = new Node(arr[j]);
        }
        else
        {
            r = NULL;  // Set to NULL if the right child does not exist or the element is INT8_MIN
        }

        temp->left = l;  // Link the left child node to the current node
        temp->right = r;  // Link the right child node to the current node

        // Push the non-null child nodes onto the queue for further processing
        if (l != NULL)
            q.push(l);
        if (r != NULL)
            q.push(r);

        i += 2;  // Increment indices for the next pair of children
        j += 2;
    }

    return root;  // Return the root node of the constructed binary tree
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
    int arr[] = {1, 2, 3, 4, 5, 6, INT8_MIN, INT8_MIN, 6, INT8_MIN, INT8_MIN, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node *root = construct(arr, n); // BFS-->breadth first search
    levelOrderQueue(root);
}