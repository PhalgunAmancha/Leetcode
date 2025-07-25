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
    public boolean checkPalindrome(List<Integer> list){
        int i = 0;
        int j = list.size() - 1;
        while(i <= j){
            if(list.get(i) != list.get(j)) return false;
            i++;
            j--;
        }
        return true;
    }
    public boolean isPalindrome(ListNode head) {
        List<Integer> list = new ArrayList<>();
        ListNode temp = head;
        while(temp != null){
            list.add(temp.val);
            temp = temp.next;
        }
        boolean res = checkPalindrome(list);
        return res;
    }
}