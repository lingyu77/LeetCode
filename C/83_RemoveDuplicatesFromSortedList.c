/*
83. Remove Duplicates from Sorted List

Given a sorted linked list, delete all duplicates such that 
each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//4ms
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* cur = head;
    
    if (head == NULL) return head;
    
    while (cur->next != NULL)
    {
        if (cur->val == cur->next->val)
        {
            if (cur->next->next != NULL)
            {
                cur->next = cur->next->next;                
            }
            else
            {
                cur->next = NULL;
                break;
            }       
        }
        
        if (cur->val != cur->next->val)
        {
            cur = cur->next;            
        } 
    }
    
    return head;
}

// Sample
struct ListNode* deleteDuplicates2(struct ListNode* head)
{
  if(head == NULL)
            return 0;
        
       struct ListNode* cur = head;
        
        while(cur) 
        {
        	while(cur->next && cur->val == cur->next->val)
            {
        		cur->next = cur->next->next;
        	}
        	cur = cur->next;
        }
        
        return head;     
}
