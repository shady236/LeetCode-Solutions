/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int leftLeavesSum(struct TreeNode* prnt, struct TreeNode* node)
{
    if(node->left && node->right)
        return leftLeavesSum(node, node->left) + leftLeavesSum(node, node->right);
    
    if(node->left)
        return leftLeavesSum(node, node->left);
    
    if(node->right)
        return leftLeavesSum(node, node->right);
    
    if(prnt != NULL && prnt->left == node)
        return node->val;
    
    return 0;
}


int sumOfLeftLeaves(struct TreeNode* root)
{
    return leftLeavesSum(NULL, root);
}