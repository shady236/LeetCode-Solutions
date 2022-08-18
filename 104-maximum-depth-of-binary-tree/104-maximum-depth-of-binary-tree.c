/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int max(int a, int b)
{
    if(a > b)
        return a;
    return b;
}


int maxDepth(struct TreeNode* root)
{
    if(root == NULL)
        return 0;
    
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}