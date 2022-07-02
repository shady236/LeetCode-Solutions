/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


void recInorderTraversal(struct TreeNode* root, int* res, int* resSize)
{
    if(root == NULL)
        return;
    
    recInorderTraversal(root->left,  res, resSize);
    
    res[*resSize] = root->val;
    (*resSize)++;
    
    recInorderTraversal(root->right, res, resSize);
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* res = malloc(100 * sizeof(int));
    int resSize = 0;
    
    recInorderTraversal(root, res, &resSize);
    *returnSize = resSize;
    
    return res;
}