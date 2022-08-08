/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* newNode(int val)
{
    struct ListNode* node = malloc(sizeof(struct ListNode));
    
    node->val  = val;
    node->next = NULL;
    
    return node;
}


void append(struct ListNode** head, struct ListNode** tail, int val)
{
    if((*head) == NULL)
    {
        *head = newNode(val);
        *tail = *head;
    }
    else 
    {
        (*tail)->next = newNode(val);
        *tail = (*tail)->next;
    }
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode* resHead = NULL;
    struct ListNode* resTail = NULL;
    
    while(list1 && list2)
    {
        int val1 = list1->val;
        int val2 = list2->val;
        
        if(val1 < val2)
        {
            append(&resHead, &resTail, val1);
            list1 = list1->next;
        }
        else 
        {
            append(&resHead, &resTail, val2);
            list2 = list2->next;
        }
    }
    
    while(list1)
    {
        append(&resHead, &resTail, list1->val);
        list1 = list1->next;
    }
    
    while(list2)
    {
        append(&resHead, &resTail, list2->val);
        list2 = list2->next;
    }
    
    
    return resHead;
}