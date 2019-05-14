// 1 ms
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode dummy = new ListNode(0);
        ListNode cur = head;
        ListNode prev = dummy;
        
        dummy.next = head;
        
        while (cur != null) {
            cur = cur.next;
            
            while (cur != null && cur.val == prev.next.val) {
                cur = cur.next;
            }
            
            if (prev.next.next == cur) prev = prev.next;
            prev.next = cur;
        }
        
        return dummy.next;
    }
}