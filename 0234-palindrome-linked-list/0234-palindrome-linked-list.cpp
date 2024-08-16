/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode* temp = head;
        int cnt = 0;
        while (temp) {
            temp = temp->next;
            cnt++;
        }

       
        temp = head;
        stack<int> st;
        int mid = cnt / 2;

        
        for (int i = 0; i < mid; i++) {
            st.push(temp->val);
            temp = temp->next;
        }

        
        if (cnt % 2 != 0) {
            temp = temp->next;
        }

        
        while (temp) {
            if (st.top() != temp->val) {
                return false;  
            }
            st.pop();
            temp = temp->next;
        }

        return true; 
    }
};
