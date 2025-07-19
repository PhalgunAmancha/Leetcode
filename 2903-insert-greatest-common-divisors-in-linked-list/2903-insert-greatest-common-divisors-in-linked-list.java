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
    public static int findGCD(int a, int b) {
        // Ensure numbers are positive
        a = Math.abs(a);
        b = Math.abs(b);

        // Euclidean algorithm
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }
    public ListNode insertGreatestCommonDivisors(ListNode head) {
        ListNode temp = head;
        while(temp.next != null){
            ListNode newNode = new ListNode(findGCD(temp.val, temp.next.val));
            newNode.next = temp.next;
            temp.next = newNode;
            temp = temp.next.next;
        }
        return head;
    }
}