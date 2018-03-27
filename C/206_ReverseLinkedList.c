/*
206. Reverse Linked List

Reverse a singly linked list.
Hint:
A linked list can be reversed either iteratively or recursively. 
Could you implement both?
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//Iterative. Runtime: 4 ms
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL, *next = NULL;
    
    while(head)
    {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    
    return prev;  
}

//Recursive. Runtime: 4 ms
struct ListNode* reverseListR(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
    {
        return head;         
    }
    
    struct ListNode* newPrev = head->next;
    head-> next = NULL;

    struct ListNode* newNext = reverseListR(newPrev);
    newPrev->next = head;
    
    return newNext;
}
