/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void recPostorderTraversal(struct TreeNode* root, int* res, int* resSize)
{
    if(root == NULL)
        return;
    
    recPostorderTraversal(root->left,  res, resSize);
    recPostorderTraversal(root->right, res, resSize);
    
    res[*resSize] = root->val;
    (*resSize)++;
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* postorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* res = malloc(100 * sizeof(int));
    int resSize = 0;
    
    recPostorderTraversal(root, res, &resSize);
    *returnSize = resSize;
    
    return res;
}