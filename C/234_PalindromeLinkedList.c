/*
234. Palindrome Linked List
Given a singly linked list, determine if it is a palindrome.

Follow up:
Could you do it in O(n) time and O(1) space?
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 /*
 Definition : Palindrome
 A palindrome is a word, phrase, number, or other sequence of characters which 
 reads the same backward as forward, such as madam or racecar.
 */
//8 ms
bool isPalindrome(struct ListNode* head) {
    struct ListNode *fast = head, *slow = head;
    struct ListNode *cur, *next, *prev;   
    int mid = 0, count = 0;
    
    if (head == NULL || head->next == NULL)
    {
        return true;            
    }
 
    if (head->next->next == NULL)
    {
        return ((head->val) == (head->next->val));
    }
 
    // Find mid node
    while (fast && fast->next)
    {
          fast = fast->next->next;
          slow = slow->next;
          mid++;
    }
        
    //Reverse linked list on left side
    cur = next = slow;
    prev = NULL;
    
    while (cur)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;     
    }
    
    cur = head;
    //Compare the right and left linked list
    while (count < mid)
    {
        if (cur->val != prev->val)
        {
            return false;
        }      
        cur = cur->next;
        prev = prev->next;
        count++;
    }
    
    return true;  
}

//Reference
bool isPalindrome2(struct ListNode* head) {
    struct ListNode* reverse = NULL;
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    struct ListNode *tmp;
    while (slow && fast) {
        if (fast->next)
            fast = fast->next->next;
        else
            break;
        
         slow = slow->next;
    }
    if (fast)
        slow = slow->next;
    
    while (slow) {
        tmp = slow->next;
        slow->next = reverse;
        reverse = slow;
        slow = tmp;
    }
   
    while (reverse) {
        if (head->val != reverse->val)
            return false;
        head = head->next;
        reverse = reverse->next;
    }
    
    return true;
}
