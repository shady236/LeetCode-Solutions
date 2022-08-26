/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    int len = 0;
    struct ListNode* node = head;
    
    while(node)
    {
        len++;
        node = node->next;
    }
    
    
    int idx = len - n;
    
    if(idx == 0)
    {
        struct ListNode* newHead = head->next;
        head->next = NULL;
        free(head);
        return newHead;
    }
    
    
    struct ListNode* prev = head;
    for(int i = 1; i < idx; i++)
        prev = prev->next;
    
    node = prev->next;
    prev->next = node->next;
    node->next = NULL;
    free(node);
    
    return head;
}