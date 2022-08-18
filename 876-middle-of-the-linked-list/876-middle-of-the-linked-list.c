/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head)
{
    int len = 0;
    struct ListNode* node = head;
    
    while(node)
    {
        len++;
        node = node->next;
    }
    
    int idx = len>>1;
    
    node = head;
    for(int i = 0; i < idx; i++)
        node = node->next;
    
    return node;
}