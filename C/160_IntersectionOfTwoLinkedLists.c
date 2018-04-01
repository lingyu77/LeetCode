/*
160. Intersection of Two Linked Lists

Write a program to find the node at which the intersection of two singly linked 
lists begins.


For example, the following two linked lists:

A:          a1 ¡÷ a2
                   ¡û
                     c1 ¡÷ c2 ¡÷ c3
                   ¡ù            
B:     b1 ¡÷ b2 ¡÷ b3
begin to intersect at node c1.


Notes:

If the two linked lists have no intersection at all, return null.
The linked lists must retain their original structure after the function returns.
You may assume there are no cycles anywhere in the entire linked structure.
Your code should preferably run in O(n) time and use only O(1) memory.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getLength(struct ListNode *head)
{
    int length = 0;
    
    while(head)
    {
        head = head->next;
        length++;
    }    
    
    return length;
}  
 
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int lengthA = 0, lengthB = 0, i = 0, lengthShort = 0;
    struct ListNode *pHeadA = headA;
    struct ListNode *pHeadB = headB;
 
    if ((headA == NULL) || (headB == NULL))
    {
        return NULL;     
    }   
    //Get the length of linked list
    lengthA = getLength(pHeadA);
    lengthB = getLength(pHeadB);
    lengthShort = lengthA;

    if (lengthA > lengthB)
    {
        for (i = 0; i < (lengthA - lengthB); i++)  
        {
            pHeadA = pHeadA->next;    
        }
        lengthShort = lengthB;         
    }
    else if (lengthA < lengthB)
    {
        for (i = 0; i < (lengthB - lengthA); i++)   
        {
            pHeadB = pHeadB->next;    
        }
        lengthShort = lengthA;        
    }

    for (i = 0; i < lengthShort; i++)
    {
        if (pHeadA == pHeadB)
        {
            return pHeadA;          
        }
        
        pHeadA = pHeadA->next;
        pHeadB = pHeadB->next;
 
        if ((pHeadA == NULL) || (pHeadB == NULL))
        {
            return NULL;     
        }              
    }    
    
    return NULL;  
}
