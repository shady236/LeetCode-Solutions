/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */


void recPreorderTraversal(struct Node* root, int* res, int* resSize)
{
    if(root == NULL)
        return;
    
    res[*resSize] = root->val;
    (*resSize)++;
    
    for(int i = 0; i < root->numChildren; i++)
        recPreorderTraversal(root->children[i], res, resSize);
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* preorder(struct Node* root, int* returnSize) 
{
    int* res = malloc(10000 * sizeof(int));
    int resSize = 0;
    
    recPreorderTraversal(root, res, &resSize);
    *returnSize = resSize;
    
    return res;
}