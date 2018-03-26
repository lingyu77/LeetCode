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

//Recursive
struct ListNode* reverseListR(struct ListNode* head) {


}
