/*
21. Merge Two Sorted Lists


Merge two sorted linked lists and return it as a new list. The new list should
 be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 //4 ms
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head, *cur;
    
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;
    
    if (l1->val >= l2->val)
    {
        head = l1;
        l1 = l1->next;
    }
    else
    {
        head = l2;
        l2 = l2->next;
    }
    cur = head;
    
    while ((l1 != NULL)&& (l2 != NULL))
    {
        if (l1->val >= l2->val)
        {
            cur->next = l1;
            l1 = l1->next;
        }
        else
        {
            cur->next = l1;
            l2 = l2->next;
        }
        cur = cur->next;         
    }
 
    if (l1 != NULL)
    {
        cur->next = l1;
    }
    else
    {
        cur->next = l2;
    }
    
    return head;   
}

// Sample Reference
struct ListNode* mergeTwoLists2(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode* head = NULL;
    struct ListNode* cur = NULL;
    
    while(l1 != NULL && l2 != NULL){
        if(l1->val <= l2->val){
            struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
            node->val = l1->val;
            node->next = NULL;
            if(head == NULL){
                head = node;
                cur = node;
            }
            else{
                cur->next = node;
                cur = cur->next;
            }
            
            l1 = l1->next;
        }
        else{
            struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
            node->val = l2->val;
            node->next = NULL;
            if(head == NULL){
                head = node;
                cur = node;
            }
            else{
                cur->next = node;
                cur = cur->next;
            }
            l2 = l2->next;
        }
    }
    
    if(l1 != NULL){
        if(head == NULL){
            head = l1;
        }
        else{
            cur->next = l1;
        }
    }
    else if(l2 != NULL){
        if(head == NULL){
            head = l2;
        }
        else cur->next = l2;
    }
    
    return head;    
}
