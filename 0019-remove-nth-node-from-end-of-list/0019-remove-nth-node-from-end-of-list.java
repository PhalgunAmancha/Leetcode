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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int cnt = 0;
        ListNode temp = head;
        while(temp != null){
            cnt++;
            temp = temp.next;
        }
        if(cnt == n){
            ListNode newNode = head.next;
            return newNode;
        }
        temp = head;
        int res = cnt - n;
        while(temp != null){
            res--;
            if(res == 0) break;
            else temp = temp.next;
        }
        temp.next = temp.next.next;
        return head;
    }
}