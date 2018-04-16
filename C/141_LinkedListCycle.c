/*
141. Linked List Cycle
Given a linked list, determine if it has a cycle in it.

Follow up:
Can you solve it without using extra space?
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 //52ms
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast = head, *slow = head;
    
    while (slow && fast && fast->next)
    {   
        fast = fast->next->next;
        slow = slow->next;
        
        if (fast == slow)
        {
            return true;         
        }
    }    
    return false;
}

//Sample
bool hasCycle2(struct ListNode *head) {
    if ((head == NULL) || (head->next == NULL)){
        return false;
    }
    struct ListNode *slow, *fast;
    slow = head;
    fast = head->next;
    while (fast && fast->next) {
        if (slow == fast) {
            return true;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}
