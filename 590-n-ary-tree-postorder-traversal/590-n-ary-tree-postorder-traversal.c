/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */


void recPostorderTraversal(struct Node* root, int* res, int* resSize)
{
    if(root == NULL)
        return;
    
    for(int i = 0; i < root->numChildren; i++)
        recPostorderTraversal(root->children[i], res, resSize);
    
    res[*resSize] = root->val;
    (*resSize)++;
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* postorder(struct Node* root, int* returnSize)
{
    int* res = malloc(10000 * sizeof(int));
    int resSize = 0;
    
    recPostorderTraversal(root, res, &resSize);
    *returnSize = resSize;
    
    return res;
}