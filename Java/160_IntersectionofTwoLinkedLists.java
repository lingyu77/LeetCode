// 1 ms
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if (headA == null || headB == null) return null;
        
        int diff = Math.abs(count(headA) - count(headB));
        
        if (count(headA) > count(headB))
            while (diff-- > 0) headA = headA.next;
        else
            while (diff-- > 0) headB = headB.next;
        
        while (headA != headB) {
            headA = headA.next;
            headB = headB.next;
        }
        
        return headA;
    }
    
    private int count(ListNode head) {
        int size = 0;
        
        while (head != null) {
            head = head.next;
            size++;
        }
        
        return size;
    }
}