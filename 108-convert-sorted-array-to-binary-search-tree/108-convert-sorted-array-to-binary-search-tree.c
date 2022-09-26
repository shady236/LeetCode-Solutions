/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

typedef  struct TreeNode   TreeNode;
typedef  TreeNode    Node;
typedef  TreeNode*   BST;


TreeNode* newNode(int val)
{
	TreeNode* node = malloc(sizeof(TreeNode));
	
	node->val = val;
	node->left = NULL;
	node->right = NULL;
	
	return node;
}


void BSTInsert(BST* root, int val)
{
	if(*root == NULL)
	{
		*root = newNode(val);
		return;
	}
	
	Node* parnt = NULL;
	Node* next  = *root;
	
	while (next)
	{
		parnt = next;
		
		if(val < parnt->val)
			next = parnt->left;
		else
			next = parnt->right;
	}
	
	
	if(val < parnt->val)
		parnt->left = newNode(val);
	else 
		parnt->right = newNode(val);
}


void convertToBST(BST* tree, int* nums, int left, int right)
{
    if(left > right)
        return;
    
    int mid = (left + right) >> 1;
    BSTInsert(tree, nums[mid]);
    convertToBST(tree, nums, left, mid - 1);
    convertToBST(tree, nums, mid + 1, right);
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize)
{
    BST  tree = NULL;
    convertToBST(&tree, nums, 0, numsSize - 1);
    return tree;
}