/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeNodes(ListNode head) {
        ListNode curr = head.next;
        ListNode tail = new ListNode(0);
        ListNode ans = tail;
        int sum = 0;
        while(curr != null){
            if(curr.val != 0){
                sum = sum + curr.val;
            }
            else{
                ListNode temp = new ListNode(sum);
                tail.next = temp;
                tail = tail.next;
                sum = 0;
            }
            curr = curr.next;
        }
        return ans.next;
    }
}