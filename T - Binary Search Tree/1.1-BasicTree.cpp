
// Binary Search Tree--> Every node to the left of a node should be smaller & every node to the right should be greater == applies for all the node
//  Can a BST contain duplicate elements?--> NO
/*
Advantage--> * Efficient Searching
               * Efficient insertion and deletion
               * Usage in implementation of other data structures like sets, maps, priority queue etc.
*/
/*
Disadvantages--> * Lack of support for range queries
                 * Not that effient in case of unbalanced Trees
*/
/*
Application--> 1.Phonebook, 2.Dictionary, 3.Stock market analysis
*/

/*
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL)
            return NULL;
        else if (root->val == val)
            return root;
        else if (val < root->val) {
            return searchBST(root->left, val);
        } else {
            return searchBST(root->right, val);
        }
    }
};
Time complexity

Best Case = O(logn)/O(h);
worst case = O(n);
Avg case = O(height)

Space complexity:- Same as time complexity
*/
#include <iostream>
using namespace std;
int main()
{
}