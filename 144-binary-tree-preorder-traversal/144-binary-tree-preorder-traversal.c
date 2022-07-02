/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


void recPreorderTraversal(struct TreeNode* root, int* res, int* resSize)
{
    if(root == NULL)
        return;
    
    res[*resSize] = root->val;
    (*resSize)++;
    
    recPreorderTraversal(root->left,  res, resSize);
    recPreorderTraversal(root->right, res, resSize);
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* res = malloc(100 * sizeof(int));
    int resSize = 0;
    
    recPreorderTraversal(root, res, &resSize);
    *returnSize = resSize;
    
    return res;
}