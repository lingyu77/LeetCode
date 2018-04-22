/*
104. Maximum Depth of Binary Tree

Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root 
node down to the farthest leaf node.

Note: A leaf is a node with no children.

Example:

Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
return its depth = 3.
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
// 4 ms
int maxDepth(struct TreeNode* root) {
    int left = 0, right = 0;
    
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        left = maxDepth(root->left);
        right = maxDepth(root->right);
    }
  
    return (left > right)? (left + 1):(right + 1);
}
