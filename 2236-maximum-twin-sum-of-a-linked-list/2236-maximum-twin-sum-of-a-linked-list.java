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
    public int pairSum(ListNode head) {
        ListNode temp = head;
        List<Integer> list = new ArrayList<>();
        while(temp != null){
            list.add(temp.val);
            temp = temp.next;
        }
        int i = 0;
        int j = list.size() - 1;
        int maxi = Integer.MIN_VALUE;
        while(i < j){
            int sum = 0;
            sum = sum + list.get(i) + list.get(j);
            maxi = Math.max(sum, maxi);
            i++;
            j--;
        }
        return maxi;
    }
}