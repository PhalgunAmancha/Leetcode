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
    public int getDecimalValue(ListNode head) {
        List<Integer> list = new ArrayList<>();
        ListNode temp = head;

        while (temp != null) {
            list.add(temp.val);
            temp = temp.next;
        }

        int n = list.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            ans += list.get(i) * Math.pow(2, n - i - 1);
        }

        return ans;
    }
}
