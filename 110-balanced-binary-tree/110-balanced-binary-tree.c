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


bool isTreeBalanced(struct TreeNode* root, int* height)
{
    if(root == NULL)
    {
        *height = 0;
        return true;
    }
    
    int leftHeight;
    bool isLeftBalanced = isTreeBalanced(root->left, &leftHeight);
    
    
    int rightHeight;
    bool isRightBalanced = isTreeBalanced(root->right, &rightHeight);
    
    
    if(isRightBalanced && isLeftBalanced && abs(rightHeight - leftHeight) <= 1)
    {
        *height = 1 + max(rightHeight, leftHeight);
        return true;
    }
    
    return false;
}


bool isBalanced(struct TreeNode* root)
{
    int dummy;
    return isTreeBalanced(root, &dummy);
}