/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* newNode(int val)
{
    struct TreeNode* node = malloc(sizeof(struct TreeNode));
    
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    
    return node;
}



struct TreeNode* insertIntoBST(struct TreeNode* root, int val)
{
    struct TreeNode* prnt = NULL;
    struct TreeNode* x = root;
    
    while(x)
    {
        prnt = x;
        
        if(x->val < val)
            x = x->right;
        else
            x = x->left;
    }
    
    if(prnt == NULL)
        root = newNode(val);
    else if(prnt->val < val)
        prnt->right = newNode(val);
    else
        prnt->left = newNode(val);
    
    return root;
}