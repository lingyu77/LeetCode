/*
203. Remove Linked List Elements

Remove all elements from a linked list of integers that have value val.

Example
Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
Return: 1 --> 2 --> 3 --> 4 --> 5

Credits:
Special thanks to @mithmatt for adding this problem and creating all test cases.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 //4 ms
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* cur = head;
 
    while (head && (head->val == val))
    {
        head = cur = cur->next;                
    }
    
    while(cur)
    {       
        // Remove
        if (cur->next && (cur->next->val == val))
        {
            cur->next = cur->next->next;
        }
        cur = cur->next;      
    }    
    return head;
}

//Sample
struct ListNode* removeElements2(struct ListNode* head, int val) {
    
    if(!head)
        return NULL;
    while(head->val==val)
    {
        head=head->next;
        if(!head)
            return NULL;
    }
    struct ListNode* p=head;
    struct ListNode* t=p->next;
    while(t)
    {
        if(t->val==val)
        {
            p->next=t->next;
        }
        else
            p=t;
        t=t->next;
    }
    return head;
}
