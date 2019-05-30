// 2 ms
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int carry = 0;
        ListNode dummyHead = new ListNode(0);
        ListNode curr = dummyHead;
        
        while (l1 != null || l2 != null) {
            int value = carry;
            
            if (l1 != null) {
                value += l1.val;
                l1 = l1.next;                
            }
            
            if (l2 != null) {
                value += l2.val;
                l2 = l2.next;                
            }
            
            curr.next = new ListNode(value % 10);
            curr = curr.next;
            carry = value / 10;
        }
        
        if (carry > 0)
            curr.next = new ListNode(carry);
            
        return dummyHead.next;
    }
}